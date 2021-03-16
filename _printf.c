#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - Simple version of printf
 *
 * @format: Arguments
 *
 * Return: # of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	va_list v_list;
	int (*specifier)(va_list);

	if (format == NULL)
		return (-1);

	va_start(v_list, format);
	while (format[i])
	{
		for (; format[i] && format[i] != '%'; i++)
		{
			_putchar(format[i]);
			j++;
		}
		if (!format[i])
			return (j);
		specifier = match_spec(&format[i + 1]);
		if (specifier)
		{
			j += specifier(v_list);
			i += 2;
			continue;
		}
		if (format[i + 1] == '%')
		{
			i += 2;
			j++;
		}
		else
		{
			i++;
			j++;
		}
	}
	printf("%d\n", j);
	va_end(v_list);
	return (j);
}
