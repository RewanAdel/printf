#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int i;

	static har buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, BUF, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
	{
		buf[i++] = c;
	}
	return (1);
}
/**
 * _puts - print string
 * @str: string to be printed
 * Return: void
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
	{
		_putchar(*str++);
	}
	return (*str - a);
}
