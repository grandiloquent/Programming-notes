
- https://github.com/P-p-H-d/mlib


```
gcc pk.c -I../include
```

1. C:\msys64\msys2_shell.cmd -mingw64
2. cd C:/Users/psycho/Desktop/Youdao/mbedtls/library
3. make LDFLAGS="-Wl,-rpath '-Wl,\$\$ORIGIN'" -f Makefile.mk SHARED=all WINDOWS_BUILD=dll