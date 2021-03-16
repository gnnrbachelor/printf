#include "holberton.h"
#include <stdlib.h>

/**
 * match_spec - Determines format specifier
 *
 * @format: Format specifier
 *
 * Return: Pointer to function or NULL
 */

int (*match_spec(const char *format))(va_list)
{
	unsigned int i;
	print p[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	for (i = 0; p[i].spec; i++)
	{
		if (*p[i].spec == *format)
		{
			break;
		}
	}

	return (p[i].func);

}
