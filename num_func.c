#include "holberton.h"
#include <stdlib.h>

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


