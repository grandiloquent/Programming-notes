# C

- [Algorithms](#algorithms)
	- [bsearch_s](#bsearch_s)
	- [qsort_s](#qsort_s)
- [Dynamic memory management](#dynamic-memory-management)
	- [aligned_alloc](#aligned_alloc)
	- [calloc](#calloc)
	- [free](#free)
	- [malloc](#malloc)
	- [realloc](#realloc)
- [File](#file)
	- [clearerr](#clearerr)
	- [fclose](#fclose)
	- [feof](#feof)
	- [ferror](#ferror)
	- [fflush](#fflush)
	- [fgetc](#fgetc)
	- [fgetpos](#fgetpos)
	- [fgets](#fgets)
	- [fopen_s](#fopen_s)
	- [fprintf_s](#fprintf_s)
	- [fputc](#fputc)
	- [fputs](#fputs)
	- [fread](#fread)
	- [freopen_s](#freopen_s)
	- [fscanf_s](#fscanf_s)
	- [fseek](#fseek)
	- [fsetpos](#fsetpos)
	- [ftell](#ftell)
	- [fwide](#fwide)
	- [fwrite](#fwrite)
	- [getc](#getc)
	- [getchar](#getchar)
	- [gets](#gets)
	- [gets_s](#gets_s)
	- [getwchar](#getwchar)
	- [perror](#perror)
	- [printf](#printf)
	- [printf_s](#printf_s)
	- [putc](#putc)
	- [putchar](#putchar)
	- [puts](#puts)
	- [putwc](#putwc)
	- [putwchar](#putwchar)
	- [remove](#remove)
	- [rename](#rename)
	- [rewind](#rewind)
	- [scanf_s](#scanf_s)
	- [setbuf](#setbuf)
	- [setvbuf](#setvbuf)
	- [sprintf_s](#sprintf_s)
	- [tmpfile_s ](#tmpfile_s)
	- [tmpnam_s](#tmpnam_s)
	- [ungetc](#ungetc)
	- [ungetwc ](#ungetwc)
	- [vfprintf_s](#vfprintf_s)
	- [vfscanf_s  ](#vfscanf_s)
	- [vscanf_s ](#vscanf_s)
	- [vsnwprintf_s  ](#vsnwprintf_s)
	- [vsscanf_s  ](#vsscanf_s)
- [keywords](#keywords)
	- [auto](#auto)
	- [break](#break)
	- [case](#case)
	- [char](#char)
	- [const](#const)
	- [continue](#continue)
	- [default](#default)
	- [do](#do)
	- [double](#double)
	- [else](#else)
	- [enum](#enum)
	- [extern](#extern)
	- [float](#float)
	- [for](#for)
	- [fortran](#fortran)
	- [goto](#goto)
	- [if](#if)
	- [inline](#inline)
	- [int](#int)
	- [long](#long)
	- [register](#register)
	- [restrict](#restrict)
	- [return](#return)
	- [short](#short)
	- [signed](#signed)
	- [sizeof](#sizeof)
	- [static](#static)
	- [struct](#struct)
	- [switch](#switch)
	- [typedef](#typedef)
	- [union](#union)
	- [unsigned](#unsigned)
	- [void](#void)
	- [volatile](#volatile)
	- [while](#while)
	- [_Alignas](#_alignas)
	- [_Alignof](#_alignof)
	- [_Atomic](#_atomic)
	- [_Bool](#_bool)
	- [_Complex](#_complex)
	- [_Generic](#_generic)
	- [_Imaginary](#_imaginary)
	- [_Noreturn](#_noreturn)
	- [_Static_assert](#_static_assert)
	- [_Thread_local](#_thread_local)
- [Strings](#strings)
	- [atof](#atof)
	- [atoi](#atoi)
	- [btowc](#btowc)
	- [c32rtomb](#c32rtomb)
	- [char32_t](#char32_t)
	- [isalnum](#isalnum)
	- [isblank](#isblank)
	- [iscntrl](#iscntrl)
	- [isdigit](#isdigit)
	- [isgraph](#isgraph)
	- [islower](#islower)
	- [isprint](#isprint)
	- [isspace](#isspace)
	- [isxdigit](#isxdigit)
	- [mblen](#mblen)
	- [mbrlen](#mbrlen)
	- [mbrtoc16](#mbrtoc16)
	- [mbrtoc32](#mbrtoc32)
	- [mbrtowc](#mbrtowc)
	- [mbsinit](#mbsinit)
	- [mbsrtowcs](#mbsrtowcs)
	- [mbsrtowcs_s](#mbsrtowcs_s)
	- [mbstate_t](#mbstate_t)
	- [mbstowcs](#mbstowcs)
	- [mbstowcs_s](#mbstowcs_s)
	- [mbtowc](#mbtowc)
	- [memchr](#memchr)
	- [memcmp ](#memcmp)
	- [memcpy_s](#memcpy_s)
	- [memmove_s](#memmove_s)
	- [memset_s](#memset_s)
	- [strcat_s](#strcat_s)
	- [strchr](#strchr)
	- [strcmp](#strcmp)
	- [strcoll](#strcoll)
	- [strcpy_s](#strcpy_s)
	- [strcspn](#strcspn)
	- [strerror_s](#strerror_s)
	- [strlen](#strlen)
	- [strncat_s](#strncat_s)
	- [strncmp](#strncmp)
	- [strncpy_s](#strncpy_s)
	- [strnlen_s](#strnlen_s)
	- [strpbrk](#strpbrk)
	- [strrchr](#strrchr)
	- [strspn](#strspn)
	- [strstr](#strstr)
	- [strtod](#strtod)
	- [strtoimax](#strtoimax)
	- [strtok_s](#strtok_s)
	- [strtol](#strtol)
	- [strxfrm](#strxfrm)
	- [wcrtomb_s](#wcrtomb_s)
	- [wctob](#wctob)
	- [wctomb_s](#wctomb_s)
- [Variadic functions](#variadic-functions)
	- [va_arg](#va_arg)
	- [va_copy](#va_copy)
	- [va_end](#va_end)
	- [va_list](#va_list)
	- [va_start](#va_start)
- [Linux](#linux)
	- [fdopendir](#fdopendir)
	- [fstatat](#fstatat)
	- [openat](#openat)
	- [readdir](#readdir)
	- [stat](#stat)

## Algorithms

### bsearch_s


```c
#include <stdlib.h>
#include <stdio.h>
 
struct data {
    int nr;
    char const *value;
} dat[] = {
    {1, "Foo"}, {2, "Bar"}, {3, "Hello"}, {4, "World"}
};
 
int data_cmp(void const *lhs, void const *rhs) 
{
    struct data const *const l = lhs;
    struct data const *const r = rhs;
 
    if (l->nr < r->nr) return -1;
    else if (l->nr > r->nr) return 1;
    else return 0;
 
    // return (l->nr > r->nr) - (l->nr < r->nr); // possible shortcut
    // return l->nr - r->nr; // erroneous shortcut (fails if INT_MIN is present)
}
 
int main(void) 
{
    struct data key = { .nr = 3 };
    struct data const *res = bsearch(&key, dat, sizeof dat / sizeof dat[0],
                                     sizeof dat[0], data_cmp);
    if (res) {
        printf("No %d: %s\n", res->nr, res->value);
    } else {
        printf("No %d not found\n", key.nr);
    }
}
/*
No 3: Hello
*/
```

### qsort_s


```c
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 
int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
 
    // return (arg1 > arg2) - (arg1 < arg2); // possible shortcut
    // return arg1 - arg2; // erroneous shortcut (fails if INT_MIN is present)
}
 
int main(void)
{
    int ints[] = { -2, 99, 0, -743, 2, INT_MIN, 4 };
    int size = sizeof ints / sizeof *ints;
 
    qsort(ints, size, sizeof(int), compare_ints);
 
    for (int i = 0; i < size; i++) {
        printf("%d ", ints[i]);
    }
 
    printf("\n");
}
// -2147483648 -743 -2 0 2 4 99
```


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

```

errno_t fopen_s(FILE *restrict *restrict streamptr,
                const char *restrict filename,
                const char *restrict mode);

```

1. Opens a file indicated by filename and returns a pointer to the file stream associated with that file. mode is used to determine the file access mode.
2. Same as (1), except that the pointer to the file stream is written to streamptr and the following errors are detected at runtime and call the currently installed constraint handler function:

	- streamptr is a null pointer
	- filename is a null pointer
	- mode is a null pointer	

	As with all bounds-checked functions, `fopen_s` is only guaranteed to be available if `__STDC_LIB_EXT1__` is defined by the implementation and if the user defines `__STDC_WANT_LIB_EXT1__` to the integer constant 1 before including `stdio.h`.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp = fopen("test.txt", "r");
    if(!fp) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    int c; // note: int, not char, required to handle EOF
    while ((c = fgetc(fp)) != EOF) { // standard C I/O file reading loop
       putchar(c);
    }

    if (ferror(fp))
        puts("I/O error when reading");
    else if (feof(fp))
        puts("End of file reached successfully");

    fclose(fp);
}
```

### fprintf_s

Loads the data from the given locations, converts them to character string equivalents and writes the results to a variety of sinks.

### fputc

Writes a character ch to the given output stream stream. putc() may be implemented as a macro and evaluate stream more than once, so the corresponding argument should never be an expression with side effects.

Internally, the character is converted to unsigned char just before being written.

### fputs

Writes every character from the null-terminated string str to the output stream stream, as if by repeatedly executing fputc.

The terminating null character from str is not written.

### fread

Reads up to count objects into the array buffer from the given input stream stream as if by calling fgetc size times for each object, and storing the results, in the order obtained, into the successive positions of buffer, which is reinterpreted as an array of unsigned char. The file position indicator for the stream is advanced by the number of characters read.

If an error occurs, the resulting value of the file position indicator for the stream is indeterminate. If a partial element is read, its value is indeterminate.

### freopen_s

First, attempts to close the file associated with stream, ignoring any errors. Then, if filename is not null, attempts to open the file specified by filename using mode as if by fopen, and associates that file with the file stream pointed to by stream. If filename is a null pointer, then the function attempts to reopen the file that is already associated with stream (it is implementation defined which mode changes are allowed in this case).

### fscanf_s

Reads data from the a variety of sources, interprets it according to format and stores the results into given locations.

### fseek

Sets the file position indicator for the file stream stream to the value pointed to by offset.

If the stream is open in binary mode, the new position is exactly offset bytes measured from the beginning of the file if origin is SEEK_SET, from the current file position if origin is SEEK_CUR, and from the end of the file if origin is SEEK_END. Binary streams are not required to support SEEK_END, in particular if additional null bytes are output.

If the stream is open in text mode, the only supported values for offset are zero (which works with any origin) and a value returned by an earlier call to ftell on a stream associated with the same file (which only works with origin of SEEK_SET).

If the stream is wide-oriented, the restrictions of both text and binary streams apply (result of ftell is allowed with SEEK_SET and zero offset is allowed from SEEK_SET and SEEK_CUR, but not SEEK_END).

In addition to changing the file position indicator, fseek undoes the effects of ungetc and clears the end-of-file status, if applicable.

If a read or write error occurs, the error indicator for the stream (ferror) is set and the file position is unaffected.

### fsetpos

Sets the file position indicator and the multibyte parsing state (if any) for the file stream stream according to the value pointed to by pos.

Besides establishing new parse state and position, a call to this function undoes the effects of ungetc and clears the end-of-file state, if it is set.

If a read or write error occurs, the error indicator (ferror) for the stream is set.

### ftell

Returns the file position indicator for the file stream stream.

If the stream is open in binary mode, the value obtained by this function is the number of bytes from the beginning of the file.

If the stream is open in text mode, the value returned by this function is unspecified and is only meaningful as the input to fseek().

### fwide

If `mode > 0`, attempts to make stream wide-oriented. If `mode < 0`, attempts to make stream byte-oriented. If mode==0, only queries the current orientation of the stream.

If the orientation of the stream has already been decided (by executing output or by an earlier call to fwide), this function does nothing.

### fwrite

Writes count of objects from the given array buffer to the output stream stream. The objects are written as if by reinterpreting each object as an array of unsigned char and calling fputc size times for each object to write those unsigned chars into stream, in order. The file position indicator for the stream is advanced by the number of characters written.

```c
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
enum { SIZE = 5 };
int main(void)
{
    double a[SIZE] = {1, 2, 3, 4, 5};
    FILE *f1 = fopen("file.bin", "wb");
    assert(f1);
    size_t r1 = fwrite(a, sizeof a[0], SIZE, f1);
    printf("wrote %zu elements out of %d requested\n", r1,  SIZE);
    fclose(f1);

    double b[SIZE];
    FILE *f2 = fopen("file.bin", "rb");
    size_t r2 = fread(b, sizeof b[0], SIZE, f2);
    fclose(f2);
    printf("read back: ");
    for(size_t i = 0; i < r2; i++)
        printf("%f ", b[i]);
}
```

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

### scanf_s

Reads data from the a variety of sources, interprets it according to format and stores the results into given locations.

```c
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <stddef.h>
#include <locale.h>

int main(void)
{
    int i, j;
    float x, y;
    char str1[10], str2[4];
    wchar_t warr[2];
    setlocale(LC_ALL, "en_US.utf8");

    char input[] = "25 54.32E-1 Thompson 56789 0123 56ß水";
    /* parse as follows:
       %d: an integer
       %f: a floating-point value
       %9s: a string of at most 9 non-whitespace characters
       %2d: two-digit integer (digits 5 and 6)
       %f:  a floating-point value (digits 7, 8, 9)
       %*d: an integer which isn't stored anywhere
       ' ': all consecutive whitespace
       %3[0-9]: a string of at most 3 decimal digits (digits 5 and 6)
       %2lc: two wide characters, using multibyte to wide conversion  */
    int ret = sscanf(input, "%d%f%9s%2d%f%*d %3[0-9]%2lc",
                     &i, &x, str1, &j, &y, str2, warr);

    printf("Converted %d fields:\ni = %d\nx = %f\nstr1 = %s\n"
           "j = %d\ny = %f\nstr2 = %s\n"
           "warr[0] = U+%x warr[1] = U+%x\n",
           ret, i, x, str1, j, y, str2, warr[0], warr[1]);

#ifdef __STDC_LIB_EXT1__
    int n = sscanf_s(input, "%d%f%s", &i, &x, str1, (rsize_t)sizeof str1);
    // writes 25 to i, 5.432 to x, the 9 bytes "thompson\0" to str1, and 3 to n.
#endif
}
```

### setbuf

Sets the internal buffer to use for stream operations. It should be at least BUFSIZ characters long.

```c
#include <stdio.h>
#include <threads.h>

int main(void)
{
    setbuf(stdout, NULL); // unbuffered stdout
    putchar('a'); // 'a' appears immediately if stdout is unbuffered
    thrd_sleep(&(struct timespec){.tv_sec=1}, NULL); // sleep 1 sec
    putchar('b'); 
}
```

### setvbuf

### sprintf_s

```c
int sprintf_s(char *restrict buffer, rsize_t bufsz,
              const char *restrict format, ...);
```

### tmpfile_s 

Creates and opens a temporary file. The file is opened as binary file for update (as if by fopen with "wb+" mode). The filename of the file is guaranteed to be unique within the filesystem. At least TMP_MAX files may be opened during the lifetime of a program (this limit may be shared with tmpnam and may be further limited by FOPEN_MAX).

### tmpnam_s

Creates a unique valid file name (no longer than L_tmpnam in length) and stores it in character string pointed to by filename. The function is capable of generating up to TMP_MAX of unique filenames, but some or all of them may be in use in the filesystem and thus not suitable return values.

### ungetc
### ungetwc 
### vfprintf_s

Loads the data from the locations, defined by vlist, converts them to character string equivalents and writes the results to a variety of sinks.

```c
#include <stdio.h>
#include <stdarg.h>
#include <time.h>

void debug_log(const char *fmt, ...)
{
    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    char time_buf[100];
    size_t rc = strftime(time_buf, sizeof time_buf, "%D %T", gmtime(&ts.tv_sec));
    snprintf(time_buf + rc, sizeof time_buf - rc, ".%06ld UTC", ts.tv_nsec / 1000);

    va_list args1;
    va_start(args1, fmt);
    va_list args2;
    va_copy(args2, args1);
    char buf[1+vsnprintf(NULL, 0, fmt, args1)];
    va_end(args1);
    vsnprintf(buf, sizeof buf, fmt, args2);
    va_end(args2);

    printf("%s [debug]: %s\n", time_buf, buf);
}

int main(void)
{
    debug_log("Logging, %d, %d, %d", 1, 2, 3);
}
```

### vfscanf_s  

### vscanf_s 
### vsnwprintf_s  
### vsscanf_s  

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

Interprets a floating-point value in a byte string pointed to by str.

```c
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("%g\n", atof("  -0.0000000123junk"));
    printf("%g\n", atof("0.012"));
    printf("%g\n", atof("15e16"));
    printf("%g\n", atof("-0x1afp-2"));
    printf("%g\n", atof("inF"));
    printf("%g\n", atof("Nan"));
    printf("%g\n", atof("1.0e+309"));   // UB: out of range of double
    printf("%g\n", atof("0.0"));
    printf("%g\n", atof("junk"));       // no conversion can be performed
}
/*
-1.23e-08
0.012
1.5e+17
-107.75
inf
nan
inf
0
0
*/
```

### atoi

Interprets an integer value in a byte string pointed to by str.

### btowc

Widens a single-byte character c (reinterpreted as unsigned char) to its wide character equivalent.

Most multibyte character encodings use single-byte codes to represent the characters from the ASCII character set. This function may be used to convert such characters to wchar_t.

### c32rtomb

Converts a single code point from its variable-length 32-bit wide character representation (but typically, UTF-32) to its narrow multibyte character representation.

### char32_t

char32_t is an unsigned integer type used for 32-bit wide characters and is the same type as uint_least32_t.

uint_least32_t is the smallest unsigned integer type with width of at least 32 bits.

### isalnum

Checks if the given character is an alphanumeric character as classified by the current C locale. In the default locale, the following characters are alphanumeric:

- digits (`0123456789`)
- uppercase letters (`ABCDEFGHIJKLMNOPQRSTUVWXYZ`)
- lowercase letters (`abcdefghijklmnopqrstuvwxyz`)

The behavior is undefined if the value of `ch` is not representable as `unsigned char` and is not equal to `EOF`.

### isblank

Checks if the given character is a blank character in the current C locale. In the default C locale, only space (0x20) and horizontal tab (0x09) are classified as blank.

The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.

### iscntrl

Checks if the given character is a control character, i.e. codes 0x00-0x1F and 0x7F.

The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.

### isdigit

Checks if the given character is a numeric character (0123456789).

The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.

### isgraph

Checks if the given character has a graphical representation, i.e. it is either a number (0123456789), an uppercase letter (ABCDEFGHIJKLMNOPQRSTUVWXYZ), a lowercase letter (abcdefghijklmnopqrstuvwxyz), or a punctuation character(<code>!"#$%&'()*+,-./:;<=>?@[\]^_&#96;{|}~</code>), or any graphical character specific to the current C locale.

The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.

### islower

Checks if the given character is classified as a lowercase character according to the current C locale. In the default "C" locale, islower returns true only for the lowercase letters (abcdefghijklmnopqrstuvwxyz).

If islower returns true, it is guaranteed that iscntrl, isdigit, ispunct, and isspace return false for the same character in the same C locale.

The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.

### isprint

Checks if the given character can be printed, i.e. it is either a number (0123456789), an uppercase letter (ABCDEFGHIJKLMNOPQRSTUVWXYZ), a lowercase letter (abcdefghijklmnopqrstuvwxyz), a punctuation character(<code>!"#$%&'()*+,-./:;<=>?@[\]^_&#96;{|}~</code>), or space, or any character classified as printable by the current C locale.

The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.

### isspace

Checks if the given character is a whitespace character, i.e. either space (0x20), form feed (0x0c), line feed (0x0a), carriage return (0x0d), horizontal tab (0x09) or vertical tab (0x0b).

The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.

### isxdigit

Checks if the given character is a hexadecimal numeric character (0123456789abcdefABCDEF) or is classified as a hexadecimal character.

The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.

### mblen

Determines the size, in bytes, of the multibyte character whose first byte is pointed to by s.

If s is a null pointer, resets the global conversion state and determined whether shift sequences are used.

This function is equivalent to the call `mbtowc((wchar_t*)0, s, n)`, except that conversion state of mbtowc is unaffected.

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
### memcpy_s

Copies count characters from the object pointed to by src to the object pointed to by dest. Both objects are interpreted as arrays of unsigned char.

The behavior is undefined if access occurs beyond the end of the dest array. If the objects overlap (which is a violation of the restrict contract) (since C99), the behavior is undefined. The behavior is undefined if either dest or src is a null pointer.

### memmove_s

Copies count characters from the object pointed to by src to the object pointed to by dest. Both objects are interpreted as arrays of unsigned char. The objects may overlap: copying takes place as if the characters were copied to a temporary character array and then the characters were copied from the array to dest.

The behavior is undefined if access occurs beyond the end of the dest array. The behavior is undefined if either dest or src is a null pointer.

```c
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "1234567890";
    puts(str);
    memmove(str+4, str+3, 3); // copy from [4,5,6] to [5,6,7]
    puts(str);

    // setting effective type of allocated memory to be int
    int *p = malloc(3*sizeof(int));   // allocated memory has no effective type
    int arr[3] = {1,2,3};
    memmove(p,arr,3*sizeof(int));     // allocated memory now has an effective type

    // reinterpreting data
    double d = 0.1;
//    int64_t n = *(int64_t*)(&d); // strict aliasing violation
    int64_t n;
    memmove(&n, &d, sizeof d); // OK
    printf("%a is %" PRIx64 " as an int64_t\n", d, n);

#ifdef __STDC_LIB_EXT1__
    set_constraint_handler_s(ignore_handler_s);
    char src[] = "aaaaaaaaaa";
    char dst[] = "xyxyxyxyxy";
    int r = memmove_s(dst,sizeof dst,src,5);
    printf("dst = \"%s\", r = %d\n", dst,r);
    r = memmove_s(dst,5,src,10);            //  count is greater than destsz  
    printf("dst = \"");
    for(size_t ndx=0; ndx<sizeof dst; ++ndx) {
        char c = dst[ndx];
        c ? printf("%c", c) : printf("\\0");
    }
    printf("\", r = %d\n", r);
#endif
}
/*
1234567890
1234456890
0x1.999999999999ap-4 is 3fb999999999999a as an int64_t
dst = "aaaaayxyxy", r = 0
dst = "\0\0\0\0\0yxyxy", r = 22
*/
```

### memset_s

Copies the value ch (after conversion to unsigned char as if by (unsigned char)ch) into each of the first count characters of the object pointed to by dest.

The behavior is undefined if access occurs beyond the end of the dest array. The behavior is undefined if dest is a null pointer.

```c
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "ghghghghghghghghghghgh";
    puts(str);
    memset(str,'a',5);
    puts(str);

#ifdef __STDC_LIB_EXT1__
    set_constraint_handler_s(ignore_handler_s);
    int r = memset_s(str, sizeof str, 'b', 5);
    printf("str = \"%s\", r = %d\n", str, r);
    r = memset_s(str, 5, 'c', 10);   // count is greater than destsz  
    printf("str = \"%s\", r = %d\n", str, r);
#endif
}

/*
ghghghghghghghghghghgh
aaaaahghghghghghghghgh
str = "bbbbbhghghghghghghghgh", r = 0
str = "ccccchghghghghghghghgh", r = 22
*/
```

### strcat_s

Appends a copy of the null-terminated byte string pointed to by src to the end of the null-terminated byte string pointed to by dest. The character src[0] replaces the null terminator at the end of dest. The resulting byte string is null-terminated.

The behavior is undefined if the destination array is not large enough for the contents of both src and dest and the terminating null character. The behavior is undefined if the strings overlap. The behavior is undefined if either dest or src is not a pointer to a null-terminated byte string.

### strchr

Finds the first occurrence of ch (after conversion to char as if by (char)ch) in the null-terminated byte string pointed to by str (each character interpreted as unsigned char). The terminating null character is considered to be a part of the string and can be found when searching for '\0'.

The behavior is undefined if str is not a pointer to a null-terminated byte string.

### strcmp

Compares two null-terminated byte strings lexicographically.

The sign of the result is the sign of the difference between the values of the first pair of characters (both interpreted as unsigned char) that differ in the strings being compared.

The behavior is undefined if lhs or rhs are not pointers to null-terminated byte strings.

Negative value if lhs appears before rhs in lexicographical order.

Zero if lhs and rhs compare equal.

Positive value if lhs appears after rhs in lexicographical order.

### strcoll

Compares two null-terminated byte strings according to the current locale as defined by the `LC_COLLATE` category.

### strcpy_s

Copies the null-terminated byte string pointed to by src, including the null terminator, to the character array whose first element is pointed to by dest.

The behavior is undefined if the dest array is not large enough. The behavior is undefined if the strings overlap. The behavior is undefined if either dest is not a pointer to a character array or src is not a pointer to a null-terminated byte string.

### strcspn

Returns the length of the maximum initial segment of the null-terminated byte string pointed to by dest, that consists of only the characters not found in the null-terminated byte string pointed to by src.

The behavior is undefined if either dest or src is not a pointer to a null-terminated byte string.

### strerror_s

Returns a pointer to the textual description of the system error code errnum, identical to the description that would be printed by perror().

errnum is usually acquired from the errno variable, however the function accepts any value of type int. The contents of the string are locale-specific.

The returned string must not be modified by the program, but may be overwritten by a subsequent call to the strerror function. strerror is not required to be thread-safe. Implementations may be returning different pointers to static read-only string literals or may be returning the same pointer over and over, pointing at a static buffer in which strerror places the string.

### strlen

Returns the length of the given null-terminated byte string, that is, the number of characters in a character array whose first element is pointed to by str up to and not including the first null character.

The behavior is undefined if str is not a pointer to a null-terminated byte string.

### strncat_s

Appends at most count characters from the character array pointed to by src, stopping if the null character is found, to the end of the null-terminated byte string pointed to by dest. The character src[0] replaces the null terminator at the end of dest. The terminating null character is always appended in the end (so the maximum number of bytes the function may write is count+1).

The behavior is undefined if the destination array does not have enough space for the contents of both dest and the first count characters of src, plus the terminating null character. The behavior is undefined if the source and destination objects overlap. The behavior is undefined if either dest is not a pointer to a null-terminated byte string or src is not a pointer to a character array,

### strncmp

Compares at most count characters of two possibly null-terminated arrays. The comparison is done lexicographically.

The sign of the result is the sign of the difference between the values of the first pair of characters (both interpreted as unsigned char) that differ in the arrays being compared.

The behavior is undefined when access occurs past the end of either array lhs or rhs. The behavior is undefined when either lhs or rhs is the null pointer.

### strncpy_s

Copies at most count characters of the character array pointed to by src (including the terminating null character, but not any of the characters that follow the null character) to character array pointed to by dest.

If count is reached before the entire array src was copied, the resulting character array is not null-terminated.

If, after copying the terminating null character from src, count is not reached, additional null characters are written to dest until the total of count characters have been written.

The behavior is undefined if the character arrays overlap, if either dest or src is not a pointer to a character array (including if dest or src is a null pointer), if the size of the array pointed to by dest is less than count, or if the size of the array pointed to by src is less than count and it does not contain a null character.

### strnlen_s

Returns the length of the given null-terminated byte string, that is, the number of characters in a character array whose first element is pointed to by str up to and not including the first null character.

The behavior is undefined if str is not a pointer to a null-terminated byte string.

```c
#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#include <stdio.h>

int main(void)
{
    const char str[] = "How many characters does this string contain?";

    printf("without null character: %zu\n", strlen(str));
    printf("with null character:    %zu\n", sizeof str);

#ifdef __STDC_LIB_EXT1__
    printf("without null character: %zu\n", strnlen_s(str, sizeof str));
#endif
}
/*
without null character: 45
with null character:    46
without null character: 45
*/
```

### strpbrk

Scans the null-terminated byte string pointed to by dest for any character from the null-terminated byte string pointed to by breakset, and returns a pointer to that character.

The behavior is undefined if either dest or breakset is not a pointer to a null-terminated byte string.

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char* str = "hello world, friend of mine!";
    const char* sep = " ,!";

    unsigned int cnt = 0;
    do {
       str = strpbrk(str, sep); // find separator
       if(str) str += strspn(str, sep); // skip separator
       ++cnt; // increment word count
    } while(str && *str);

    printf("There are %u words\n", cnt);
}

// There are 5 words
```

### strrchr

Finds the last occurrence of ch (after conversion to char as if by (char)ch) in the null-terminated byte string pointed to by str (each character interpreted as unsigned char). The terminating null character is considered to be a part of the string and can be found if searching for '\0'.

The behavior is undefined if str is not a pointer to a null-terminated byte string.

### strspn

Returns the length of the maximum initial segment (span) of the null-terminated byte string pointed to by dest, that consists of only the characters found in the null-terminated byte string pointed to by src.

The behavior is undefined if either dest or src is not a pointer to a null-terminated byte string.

```c
#include <string.h>
#include <stdio.h>

int main(void)
{
    const char *string = "abcde312$#@";
    const char *low_alpha = "qwertyuiopasdfghjklzxcvbnm";

    size_t spnsz = strspn(string, low_alpha);
    printf("After skipping initial lowercase letters from '%s'\n"
           "The remainder is '%s'\n", string, string+spnsz);
}
/*
After skipping initial lowercase letters from 'abcde312$#@'
The remainder is '312$#@'
*/
```

### strstr

Finds the first occurrence of the null-terminated byte string pointed to by substr in the null-terminated byte string pointed to by str. The terminating null characters are not compared.

The behavior is undefined if either str or substr is not a pointer to a null-terminated byte string.

```c
#include <string.h>
#include <stdio.h>

void find_str(char const* str, char const* substr) 
{
    char* pos = strstr(str, substr);
    if(pos) {
        printf("found the string '%s' in '%s' at position: %ld\n", substr, str, pos - str);
    } else {
        printf("the string '%s' was not found in '%s'\n", substr, str);
    }
}

int main(void) 
{
    char* str = "one two three";
    find_str(str, "two");
    find_str(str, "");
    find_str(str, "nine");
    find_str(str, "n");

    return 0;
}
/*
found the string 'two' in 'one two three' at position: 4
found the string '' in 'one two three' at position: 0
the string 'nine' was not found in 'one two three'
found the string 'n' in 'one two three' at position: 1
*/
```

### strtod

Interprets a floating-point value in a byte string pointed to by str.

### strtoimax

Interprets an integer value in a byte string pointed to by nptr.

### strtok_s

```c
#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#include <stdio.h>

int main(void)
{
    char input[] = "A bird came down the walk";
    printf("Parsing the input string '%s'\n", input);
    char *token = strtok(input, " ");
    while(token) {
        puts(token);
        token = strtok(NULL, " ");
    }

    printf("Contents of the input string now: '");
    for(size_t n = 0; n < sizeof input; ++n)
        input[n] ? putchar(input[n]) : fputs("\\0", stdout);
    puts("'");

#ifdef __STDC_LIB_EXT1__
    char str[] = "A bird came down the walk";
    rsize_t strmax = sizeof str;
    const char *delim = " ";
    char *next_token;
    printf("Parsing the input string '%s'\n", str);
    token = strtok_s(str, &strmax, delim, &next_token);
    while(token) {
        puts(token);
        token = strtok_s(NULL, &strmax, delim, &next_token);
    }

    printf("Contents of the input string now: '");
    for(size_t n = 0; n < sizeof str; ++n)
        str[n] ? putchar(str[n]) : fputs("\\0", stdout);
    puts("'");
#endif
}
/*
Parsing the input string 'A bird came down the walk'
A
bird
came
down
the
walk
Contents of the input string now: 'A\0bird\0came\0down\0the\0walk\0'
Parsing the input string 'A bird came down the walk'
A
bird
came
down
the
walk
Contents of the input string now: 'A\0bird\0came\0down\0the\0walk\0'
*/
```

### strtol

Interprets an integer value in a byte string pointed to by str.

### strxfrm

Transforms the null-terminated byte string pointed to by src into the implementation-defined form such that comparing two transformed strings with strcmp gives the same result as comparing the original strings with strcoll, in the current C locale.

The first count characters of the transformed string are written to destination, including the terminating null character, and the length of the full transformed string is returned, excluding the terminating null character.

The behavior is undefined if the dest array is not large enough. The behavior is undefined if dest and src overlap.

If count is ​0​, then dest is allowed to be a null pointer.

### wcrtomb_s

```c
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <wchar.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "en_US.utf8");
    mbstate_t state;
    memset(&state, 0, sizeof state);
    wchar_t in[] = L"zß水🍌"; // or "z\u00df\u6c34\U0001F34C"
    size_t in_sz = sizeof in / sizeof *in;

    printf("Processing %zu wchar_t units: [ ", in_sz);
    for(size_t n = 0; n < in_sz; ++n) printf("%#x ", (unsigned int)in[n]);
    puts("]");

    char out[MB_CUR_MAX * in_sz];
    char *p = out;
    for(size_t n = 0; n < in_sz; ++n) {
        int rc = wcrtomb(p, in[n], &state); 
        if(rc == -1) break;
        p += rc;
    }

    size_t out_sz = p - out;
    printf("into %zu UTF-8 code units: [ ", out_sz);
    for(size_t x = 0; x < out_sz; ++x) printf("%#x ", +(unsigned char)out[x]);
    puts("]");
}
/*
Processing 5 wchar_t units: [ 0x7a 0xdf 0x6c34 0x1f34c 0 ]
into 11 UTF-8 code units: [ 0x7a 0xc3 0x9f 0xe6 0xb0 0xb4 0xf0 0x9f 0x8d 0x8c 0 ]
*/
```

### wctob

Narrows a wide character c if its multibyte character equivalent in the initial shift state is a single byte.

This is typically possible for the characters from the ASCII character set, since most multibyte encodings (such as UTF-8) use single bytes to encode those characters.

```c
#include <locale.h>
#include <wchar.h>
#include <stdio.h>
#include <assert.h>

void try_narrowing(wchar_t c)
{
    int cn = wctob(c);
    if(cn != EOF)
        printf("%#x narrowed to %#x\n", c, cn);
    else
        printf("%#x could not be narrowed\n", c);
}

int main(void)
{
    char* utf_locale_present = setlocale(LC_ALL, "th_TH.utf8");
    assert(utf_locale_present);
    puts("In Thai UTF-8 locale:");
    try_narrowing(L'a');
    try_narrowing(L'๛');

    char* tis_locale_present = setlocale(LC_ALL, "th_TH.tis620");
    assert(tis_locale_present);
    puts("In Thai TIS-620 locale:");
    try_narrowing(L'a');
    try_narrowing(L'๛');
}
/*
In Thai UTF-8 locale:
0x61 narrowed to 0x61
0xe5b could not be narrowed
In Thai TIS-620 locale:
0x61 narrowed to 0x61
0xe5b narrowed to 0xfb
*/
```

### wctomb_s

```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void demo(wchar_t wc)
{
    printf("State-dependent encoding?   %d\n", wctomb(NULL, wc));

    char mb[MB_CUR_MAX];
    int len = wctomb(mb,wc);
    printf("wide char '%lc' -> multibyte char '", wc);
    for (int idx = 0; idx < len; ++idx)
        printf("%#2x ", (unsigned char)mb[idx]);
    printf("'\n");
}

int main(void)
{
    setlocale(LC_ALL, "en_US.utf8");
    printf("MB_CUR_MAX = %zu\n", MB_CUR_MAX);
    demo(L'A');
    demo(L'\u00df');
    demo(L'\U0001d10b');
}
/*
MB_CUR_MAX = 6
State-dependent encoding?   0
wide char 'A' -> multibyte char '0x41 '
State-dependent encoding?   0
wide char 'ß' -> multibyte char '0xc3 0x9f '
State-dependent encoding?   0
wide char '𝄋' -> multibyte char '0xf0 0x9d 0x84 0x8b '
*/
```

## Variadic functions

### va_arg
### va_copy
### va_end
### va_list
### va_start

## Linux

### fdopendir

http://man7.org/linux/man-pages/man3/fdopendir.3p.html

### fstatat

http://man7.org/linux/man-pages/man2/fstatat.2.html

### openat

http://man7.org/linux/man-pages/man2/open.2.html

### readdir

http://man7.org/linux/man-pages/man3/readdir.3.html

### stat

http://man7.org/linux/man-pages/man2/stat.2.html

