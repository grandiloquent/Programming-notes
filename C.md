# C

## Algorithms

### bsearch
### bsearch_s
### qsort
### qsort_s

## Dynamic memory management

### aligned_alloc

### calloc

```c

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p1 = calloc(4, sizeof(int));    // allocate and zero out an array of 4 int
    int *p2 = calloc(1, sizeof(int[4])); // same, naming the array type directly
    int *p3 = calloc(4, sizeof *p3);     // same, without repeating the type name

    if(p2) {
        for(int n=0; n<4; ++n) // print the array
            printf("p2[%d] == %d\n", n, p2[n]);
    }

    free(p1);
    free(p2);
    free(p3);
}

```

### free
### malloc
### realloc

```c

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pa = malloc(10 * sizeof *pa); // allocate an array of 10 int
    if(pa) {
        printf("%zu bytes allocated. Storing ints: ", 10*sizeof(int));
        for(int n = 0; n < 10; ++n)
            printf("%d ", pa[n] = n);
    }

    int *pb = realloc(pa, 1000000 * sizeof *pb); // reallocate array to a larger size
    if(pb) {
        printf("\n%zu bytes allocated, first 10 ints are: ", 1000000*sizeof(int));
        for(int n = 0; n < 10; ++n)
            printf("%d ", pb[n]); // show the array
        free(pb);
    } else { // if realloc failed, the original pointer needs to be freed
        free(pa);
    }
}

```

## File

### clearerr

```c

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
    FILE* tmpf = tmpfile();
    fputs("abcde\n", tmpf);
    rewind(tmpf);
    int ch;
    while ((ch=fgetc(tmpf)) != EOF)
          printf("%c", ch);
    assert(feof(tmpf)); // the loop is expected to terminate by eof
    puts("End of file reached");

    clearerr(tmpf);  // clear eof

    if (feof(tmpf))
        puts("EOF indicator set");
    else
        puts("EOF indicator cleared\n");
}

```

### fclose

Closes the given file stream. Any unwritten buffered data are flushed to the OS. Any unread buffered data are discarded.

Whether or not the operation succeeds, the stream is no longer associated with a file, and the buffer allocated by `setbuf` or `setvbuf`, if any, is also disassociated and deallocated if automatic allocation was used.

The behavior is undefined if the value of the pointer stream is used after fclose returns.

### feof

Checks if the end of the given file stream has been reached.

### ferror

Checks the given stream for errors.

### fflush

For output streams (and for update streams on which the last operation was output), writes any unwritten data from the stream's buffer to the associated output device.

For input streams (and for update streams on which the last operation was input), the behavior is undefined.

If stream is a null pointer, all open output streams are flushed, including the ones manipulated within library packages or otherwise not directly accessible to the program.

### fgetc

Reads the next character from the given input stream. `getc()` may be implemented as a macro.

### fgetpos

Obtains the file position indicator and the current parse state (if any) for the file stream stream and stores them in the object pointed to by pos. The value stored is only meaningful as the input to `fsetpos`.

```c

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
    // prepare a file holding 4 values of type double
    enum {SIZE = 4};
    FILE* fp = fopen("test.bin", "wb");
    assert(fp);
    int rc = fwrite((double[SIZE]){1.1, 2.2, 3.3, 4.4}, sizeof(double), SIZE, fp);
    assert(rc == SIZE);
    fclose(fp);

    // demo using fsetpos to return to the beginning of a file
    fp = fopen("test.bin", "rb");
    fpos_t pos;
    fgetpos(fp, &pos);               // store start of file in pos
    double d;
    rc = fread(&d, sizeof d, 1, fp); // read the first double
    assert(rc == 1);
    printf("First value in the file: %.1f\n", d);
    fsetpos(fp,&pos);                 // move file position back to the start of the file
    rc = fread(&d, sizeof d, 1, fp);  // read the first double again
    assert(rc == 1);
    printf("First value in the file again: %.1f\n", d);
    fclose(fp);

    // demo error handling
    rc = fsetpos(stdin, &pos);
    if(rc) perror("could not fsetpos stdin");
}

```

### fgets

Reads at most count - 1 characters from the given file stream and stores them in the character array pointed to by str. Parsing stops if end-of-file occurs or a newline character is found, in which case str will contain that newline character. If no errors occur, writes a null character at the position immediately after the last character written to str.

The behavior is undefined if count is less than 1.

### fopen_s
### fprintf
### fprintf_s
### fputc
### fputs
### fputwc
### fputws
### fread
### freopen
### freopen_s
### fscanf
### fscanf_s
### fseek
### fsetpos
### ftell
### fwide
### fwprintf
### fwprintf_s
### fwrite
### fwscanf
### fwscanf_s
### getc
### getchar
### gets
### gets_s
### getwchar
### perror
### printf
### printf_s
### putc
### putchar
### puts
### putwc
### putwchar
### remove
### rename
### rewind
### scanf
### scanf_s
### setbuf
### setvbuf
### snprintf
### snprintf_s
### snwprintf_s
### sprintf
### sprintf_s
### sscanf
### sscanf_s
### swprintf
### swprintf_s
### swscanf
### swscanf_s
### tmpfile
### tmpfile_s
### tmpnam
### tmpnam_s
### ungetc
### ungetwc
### vfprintf
### vfprintf_s
### vfscanf
### vfscanf_s
### vfwprintf
### vfwprintf_s
### vfwscanf
### vfwscanf_s
### vprintf
### vprintf_s
### vscanf
### vscanf_s
### vsnprintf
### vsnprintf_s
### vsnwprintf_s
### vsprintf
### vsprintf_s
### vsscanf
### vsscanf_s
### vswprintf
### vswprintf_s
### vswscanf
### vswscanf_s
### vwprintf
### vwprintf_s
### vwscanf
### vwscanf_s
### wprintf
### wprintf_s
### wscanf
### wscanf_s

## keywords

### auto
### break
### case
### char
### const
### continue
### default
### do
### double
### else
### enum
### extern
### float
### for
### fortran
### goto
### if
### inline
### int
### long
### register
### restrict
### return
### short
### signed
### sizeof
### static
### struct
### switch
### typedef
### union
### unsigned
### void
### volatile
### while
### _Alignas
### _Alignof
### _Atomic
### _Bool
### _Complex
### _Generic
### _Imaginary
### _Noreturn
### _Static_assert
### _Thread_local

## Strings

### atof
### atoi
### atol
### atoll
### btowc
### c16rtomb
### c32rtomb
### char16_t
### char32_t
### isalnum
### isalpha
### isblank
### iscntrl
### isdigit
### isgraph
### islower
### isprint
### ispunct
### isspace
### isupper
### iswalnum
### iswalpha
### iswblank
### iswcntrl
### iswctype
### iswdigit
### iswgraph
### iswlower
### iswprint
### iswpunct
### iswspace
### iswupper
### iswxdigit
### isxdigit
### mblen
### mbrlen
### mbrtoc16
### mbrtoc32
### mbrtowc
### mbsinit
### mbsrtowcs
### mbsrtowcs_s
### mbstate_t
### mbstowcs
### mbstowcs_s
### mbtowc
### memchr
### memcmp
### memcpy
### memcpy_s
### memmove
### memmove_s
### memset
### memset_s
### strcat
### strcat_s
### strchr
### strcmp
### strcoll
### strcpy
### strcpy_s
### strcspn
### strerror
### strerrorlen_s
### strerror_s
### Strings library
### strlen
### strncat
### strncat_s
### strncmp
### strncpy
### strncpy_s
### strnlen_s
### strpbrk
### strrchr
### strspn
### strstr
### strtod
### strtof
### strtoimax
### strtok
### strtok_s
### strtol
### strtold
### strtoll
### strtoul
### strtoull
### strtoumax
### strxfrm
### tolower
### toupper
### towctrans
### towlower
### towupper
### wcrtomb
### wcrtomb_s
### wcscat
### wcscat_s
### wcschr
### wcscmp
### wcscoll
### wcscpy
### wcscpy_s
### wcscspn
### wcslen
### wcsncat
### wcsncat_s
### wcsncmp
### wcsncpy
### wcsncpy_s
### wcsnlen_s
### wcspbrk
### wcsrchr
### wcsrtombs
### wcsrtombs_s
### wcsspn
### wcsstr
### wcstod
### wcstof
### wcstoimax
### wcstok
### wcstok_s
### wcstol
### wcstold
### wcstoll
### wcstombs
### wcstombs_s
### wcstoul
### wcstoull
### wcstoumax
### wcsxfrm
### wctob
### wctomb
### wctomb_s
### wctrans
### wctype
### wmemchr
### wmemcmp
### wmemcpy
### wmemcpy_s
### wmemmove
### wmemmove_s
### wmemset

## Variadic functions

### va_arg
### va_copy
### va_end
### va_list
### va_start

