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

/**
 * print_d - Prints number
 *
 * @n: Number for printing
 *
 * Return: Void
 */

int print_d(va_list n)
{
	int print_count = 0;
	int num;
	int temp;

	num = va_arg(n, int);

	if (num < 0)
	{
		_putchar('-');
		print_count++;
		num = num * -1;
	}

	temp = num;

	while (temp > 9)
	{
		temp = temp / 10;
		print_count++;
	}

	recursive_print(num);
	return (print_count);
}

/**
 * recursive_print - Prints using putchar
 *
 * @num: Number for printing
 *
 * Return: Void
 */

void recursive_print(int num)
{
	if (num / 10 != 0)
		recursive_print(num / 10);

	_putchar(num % 10 + '0');
}



