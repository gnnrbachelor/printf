#include "holberton.h"
#include <stdlib.h>

/**
 * print_c - Prints character
 *
 * @c: Pointer to arg
 *
 * Return: 1
 */

int print_c(va_list c)
{
	_putchar((char)va_arg(c, int));
	return (1);
}

/**
 * print_s - Prints string
 *
 * @s: Pointer to arg
 *
 * Return: # of characters in string
 */

int print_s(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_r - Reverses String
 *
 * @r: Pointer to string
 *
 * Return: # of characters in string
 */

int print_r(va_list r)
{
	int i;
	int j = 0;
	char *str;

	str = va_arg(r, char *);

	if (str)
	{

		while (str[i])
			i++;
		j = i;

		for (; i >= 0; i--)
			_putchar(str[i]);
	}
	return (j);
}
