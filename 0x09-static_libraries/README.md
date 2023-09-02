# 0x09.C - Static Libraries :books:

This directory contains tasks related to creating and using static libraries in the context of the C programming language. It demonstrates the implementation of utility functions, creating static libraries, and utilizing them in a test program.

## Task 0: Creating Static Library :hammer and wrench:

In this task, a static library named `libmy.a` is created. It includes utility functions with the following prototypes:

- `int _putchar(char c);`
- `int _islower(int c);`
- `int _isalpha(int c);`
- `int _abs(int n);`
- `int _isupper(int c);`
- `int _isdigit(int c);`
- `int _strlen(char *s);`
- `void _puts(char *s);`
- `char *_strcpy(char *dest, char *src);`
- `int _atoi(char *s);`
- `char *_strcat(char *dest, char *src);`
- `char *_strncat(char *dest, char *src, int n);`
- `char *_strncpy(char *dest, char *src, int n);`
- `int _strcmp(char *s1, char *s2);`
- `char *_memset(char *s, char b, unsigned int n);`
- `char *_memcpy(char *dest, char *src, unsigned int n);`
- `char *_strchr(char *s, char c);`
- `unsigned int _strspn(char *s, char *accept);`
- `char *_strpbrk(char *s, char *accept);`
- `char *_strstr(char *haystack, char *needle);`

 Created `libmy.a` and stored utility functions.

## Task 1: Using Static Library and Test Program :computer:

This task demonstrates the usage of the created static library in a test program. Key steps:

1. Compiled utility functions into object files.
2. Created `liball.a` static library with a script.
3. Compiled test program `main.c` using the static library.
4. Ran the test program for validation.

 Compiled utility functions, created `liball.a`, and verified through test program.


