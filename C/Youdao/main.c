#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stddef.h>
#include <string.h>
#include "lite-list.h"

#ifndef container_of
#    define container_of(ptr, type, member) \
        ((type*)((char*)(ptr)-offsetof(type, member)))
#endif

typedef struct word
{
    char* buf;
    list_head_t list;
} word_t;

int contains(list_head_t* list, const char* s)
{
    word_t* pos;
    list_for_each_entry(pos, list, list, word_t)
    {
        if (strcmp(pos->buf, s) == 0)
            return 1;
    }
    return 0;
}
int main()
{

    LIST_HEAD(word_list);
    INIT_LIST_HEAD(&word_list);

    FILE* txt = fopen("words.txt", "r");
    if (!txt)
    {
        return 0;
    }
    size_t len = 30, i = 0;
    int c;
    char buf[len];
    memset(buf, 0, len);

    while ((c = fgetc(txt)) != EOF)
    {

        if (isalpha(c) && i < len)
        {
            buf[i++] = isupper(c) ? tolower(c) : c;
        }
        else if (buf[0] == 0 || strlen(buf) == 1)
        {
            continue;
        }
        else
        {
            if (!contains(&word_list, buf))
            {
                word_t* word = malloc(sizeof(word_t));
                word->buf = strdup(buf);
                list_add_tail(&word->list, &word_list);
            }

            i = 0;
            memset(buf, 0, len);
        }
    }
    word_t *pos, *tmp;
    list_for_each_entry_safe(pos, tmp, &word_list, list, word_t)
    {
        printf("%s\n", pos->buf);
        list_del(&pos->list);
        free(pos->buf);
        free(pos);
    }
    fclose(txt);

    return 0;
}