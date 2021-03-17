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
 *  * _isalpha - Determines if alphabetic
 *   * @c: character
 *    * Return: 0
 *     */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

