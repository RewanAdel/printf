#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF FLUSH -1

#define NULL_STRING "(null)"

#define PARAMS_INIT (0, 0, 0, 0, 0, 0, 0, 0, 0, 0,)

#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED 2

/* printf.c */
int _printf(const char *format, ...);

/* putchar.c */
int _putchar(char c);
#endif
