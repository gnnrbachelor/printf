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

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - prints % sign
 *
 * @p: Pointer to arg
 *
 * Return: # characters printed
 */

int print_percent(va_list p)
{
	(void)p;
	_putchar('%');
	return (1);
}


