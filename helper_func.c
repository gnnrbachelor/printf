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

	num = va_arg(n, int);

	if (num < 0)
	{
		_putchar('-');
		print_count++;
		num = num * -1;
	}
	if (num == 0)
		print_count++;

	recursive_print(num);
	print_count += num_count(num);

	return (print_count);
}

/**
 * num_count - Counts for print_d return
 *
 * @n: number for division
 *
 * Return: Int
 */

int num_count(int n)
{
	int print_count = 0;
	unsigned int temp = n;

	while (temp > 0)
	{
		temp = temp / 10;
		print_count++;
	}
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
	unsigned int temp = num;

	if (temp / 10 != 0)
		recursive_print(temp / 10);

	_putchar(temp % 10 + '0');
}


