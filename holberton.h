#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 * struct print - Holds character pointer and function point
 *
 * @spec: character pointer
 * @func: pointer to func
 *
 */

typedef struct print
{
	char *spec;
	int (*func)(va_list);
} print;

int _printf(const char *format, ...);
int (*match_spec(const char *format))(va_list);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_percent(va_list p);


#endif
