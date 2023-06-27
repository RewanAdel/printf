#include "main.h"

/**
 * letter - prints a char
 * @c: list to print
 * Return: characters
 */

int ch(va_list c)
{
	return (_putchar(va_arg(c, int)));
}
