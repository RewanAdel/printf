#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0';)
	{
		l++;
	}
	return (l);
}
