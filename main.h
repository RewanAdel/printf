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

/**
 * struct parameters - parameters struct
 * @unsign: if
 * @plus_flag: if
 * @space_flag: if
 * @hashtag_flag: if
 * @zero_ flag: if 
 * @minus_flag: if
 * @width: if
 * @precision: if
 * @h_modifier: if
 * @l_modifier: if
 */
typedef struct parameters
{
	unsigned int unsign  : 1;
	unsigned int plus_flag  : 1;
	unsigned int space_flag  : 1;
	unsigned int hashtag_flag  : 1;
	unsigned int zero_flag  : 1;
	unsigned int minus_flag  : 1;
	unsigned int width;
	unsigned int precision;
	unsigned int h_modifier  : 1;
	unsigned int l_modifier  : 1;
}params_t;
/**
 * struct specifier - struct
 * @specifier: format
 * @f: the function
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, params_t *);
}specifier

/* _printf_funiction.c */
int _printf(const char *format, ...);

/* _putchar.c */
int _putchar(char c);
int _puts(char *str);
/* print_char.c */
int ch(va_list c);

/*print_string */
int _strlen(char *s);

#endif /* MAIN_PRINTF_H */
