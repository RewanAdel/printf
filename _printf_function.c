#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list x;
	int reading = 0;

	va_start(x, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					reading += printf("%c", va_arg(x, int));
					break;
				case 's':
					reading += printf("%s", va_arg(x, char *));
					break;
				case '%':
					reading += printf("%%");
					break;
				case 'd':
					reading += printf("%d", va_arg(x, int));
					break;
				case 'i':
					reading += printf("%d", va_arg(x, int));
					break;
				default:
					break;
			}
		}
		else
		{
			putchar(*format);
			reading++;
		}
		format++;
	}
	va_end(x);
	return (reading);
}
