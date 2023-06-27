#ifndef MAIN_PRINTF_H
#define MAIN_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF FLUSH -1

#define NULL_STRING "(null)"INi

#define PARAMS_INIT (0, 0, 0, 0, 0, 0, 0, 0, 0, 0,)

#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED 2

/* _printf_funiction.c */
int _printf(const char *format, ...);

/* _putchar.c */
int _putchar(char c);

/* print_char.c */
int ch(va_list c);

/*print_string */
int _strlen(char *s);

#endif /* MAIN_PRINTF_H */
