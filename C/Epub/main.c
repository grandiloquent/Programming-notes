// zip.c

#include <stdio.h>
#include "zip.h"
#include <stdlib.h>
#include <string.h>
#include "tinydir.h"
#include <ctype.h>
#include <errno.h>
#include <sys/stat.h>

char* trim(char* buf) {
	char* tmp = buf;
	size_t i = 0;
	while (*tmp) {
		if (isspace(*tmp)) {
			i++;
		} else {
			break;
		}
		tmp++;
	}
	if (i > 0)
		memmove(buf, tmp, i);

	size_t len = strlen(buf);
	while (--len) {
		if (isspace(buf[len]))
			buf[len] = 0;
		else
			break;
	}
	return buf;
}

static inline int ends_with(const char* buf, const char* suffix) {
	size_t len = strlen(buf);
	size_t suflen = strlen(suffix);
	if (len < suflen || memcmp(buf + (len - suflen), suffix, suflen))
		return 0;

	return 1;
}

static inline int indexof(const char* s1, const char* s2) {
	if (s1 == NULL || s2 == NULL || *s1 == 0 || *s2 == 0) {
		return -1;
	}
	const char* p1 = s1;

	size_t len = strlen(p1);

	for (size_t i = 0; i < len; i++) {
		if (p1[i] == *s2) {
			const char* p2 = s2;
			while (*p2 && *p2 == p1[i]) {
				i++;
				p2++;
			}
			if (*p2 == 0)
				return i;
		}
	}
	return -1;
}

char * slice(char *s) {
	char* tmp = s;
	size_t i = 0;
	while (*tmp) {
		if (*tmp == '>') {
			i++;
			tmp++;
			break;
		}
		i++;
		tmp++;
	}
	
	printf("%s %d %s\n",tmp,i,s);
	size_t len=strlen(tmp);
	char buf[len];
	for(int i=0;i<len;i++){
		buf[i]=tmp[i];
	}
	for(int i=0;i<len;i++){
		*(s+i)=buf[i];
	}
	*(s+len)=0;
	//memmove(s, tmp, i);
	return s;
}

char* between(const char* buf, const char* start, const char* end) {
	int start_idx = indexof(buf, start);
	if (start_idx == -1)
		return NULL;

	int end_idx = indexof(buf, end);
	if (end_idx == -1)
		return NULL;
	end_idx = end_idx - strlen(end);
	if (end_idx <= start_idx)
		return NULL;

	char* result = malloc(end_idx - start_idx + 1);
	char* tmp = result;
	for (size_t i = start_idx; i < end_idx; i++) {

		*tmp++ = buf[i];
	}
	*tmp = 0;
	return result;
}

static inline char* strip(char* buf) {
	char end1 = '-';
	char end2 = '/';

	char cs[] = { '\"', '<', '>', '|', ':', '*', '?', '\\', '/' };
	size_t len = sizeof(cs) / sizeof(cs[0]);

	char* tmp = buf;
	char c;
	while (c = *tmp) {
		if (c == end1 || c == end2) {
			*tmp = 0;
			break;
		}
		for (size_t i = 0; i++; i < len) {
			if (c == cs[i]) {
				*tmp = ' ';
			}
		}
		tmp++;
	}

	buf = trim(buf);

	return buf;
}
int parse_opf(const char* dir, const char* path, const char* buf) {
	char* name = malloc(MAX_PATH);
	memset(name, 0, MAX_PATH);

	char* title = between(buf, "<dc:title", "</dc:title>");
	if (title != NULL) {
		slice(title);
		strip(title);


		strcat(name, dir);
		strcat(name, "/");
		strcat(name, title);
		free(title);
	} else {
		free(name);
		return -1;
	}
	char* creator = between(buf, "<dc:creator", "</dc:creator>");

	if (creator != NULL) {
		printf("%s \n",creator);
		slice(creator);
		strcat(name, " - ");
		printf("%s \n",creator);
		strcat(name, creator);
		free(creator);
	}
	strcat(name, ".epub");
	int rc = rename(path, (const char*)name);

	//struct stat s;stat(path, &s),
	printf("%s %s %s\n", strerror(errno), path, name);
	free(name);
	return 0;
}

void pretty_name(const char* dir, const char* path) {
	unsigned char* buf;

	struct zip_t* zip = zip_open(path, 0, 'r');
	if (!zip) {
		printf("%s\n", "zip_open failed");
		return;
	}
	int i, n = zip_total_entries(zip);
	int found = 0;
	for (i = 0; i < n; ++i) {
		zip_entry_openbyindex(zip, i);
		{
			if (zip_entry_isdir(zip))
				continue;
		}
		const char* name = zip_entry_name(zip);
		if (!found && ends_with(name, ".opf")) {

			size_t bufSize = zip_entry_size(zip);
			buf = calloc(sizeof(unsigned char), bufSize);
			zip_entry_noallocread(zip, (void*)buf, bufSize);

			found = 1;
		}
		zip_entry_close(zip);
		if (found)
			break;
	}
	zip_close(zip);
	parse_opf(dir, path, buf);
	free(buf);
}
int main() {

	const char* path = ".";
	tinydir_dir dir;
	tinydir_open(&dir, path);

	while (dir.has_next) {
		tinydir_file file;
		tinydir_readfile(&dir, &file);
		if (file.is_reg && indexof(file.name, ".epub") != -1) {
			pretty_name(path, file.path);

			//printf("%s\n", file.name);
		}
		tinydir_next(&dir);
	}
	tinydir_close(&dir);

	return 0;
}