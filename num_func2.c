#include "holberton.h"
#include <stdlib.h>

/**
 * print_b - prints converts unsigned int to binary
 *
 * @p: Pointer to arg
 *
 * Return: # digit printed
 */

int print_b(va_list b)
{
	unsigned int i;
	int j, k;
	unsigned int num;
	unsigned int count;
	unsigned int num_a[32];

	num = va_arg(b, unsigned int);

	for (i = 0; i < 32; i++)
	{
		num_a[i] = num % 2;
		num = num / 2;
	}

	k = 31;

	while (num_a[k] == 0)
		k--;

	for (j = k; j >= 0; j--)
	{
		_putchar(num_a[j] + '0');
		count++;
	}

	return (count);
}



