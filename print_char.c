#include "main.h"

/**
 * ch - prints a char
 * @z: list to print
 * Return: characters
 */

int ch(va_list z)
{
	return (_putchar(va_arg(z, int)));
}
