#include "main.h"

/**
 * str - prints string
 * @k: list
 * Return: char number
 */
int str(va_list k)
{
	char *str;
	int d;

	str = va_arg(k, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	d = 0;

	while (str[d] != '\0')
	{
		d = d + _putchar(str[d]);
	}
	return (d);
}
