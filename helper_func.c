#include "holberton.h"
#include <stdlib.h>

int print_c(va_list c)
{
	_putchar((char)va_arg(c, int));
	return (1);
}

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
