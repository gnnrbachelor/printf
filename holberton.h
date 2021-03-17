#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * struct print - Holds character pointer and function pointer
 *
 * @spec: Character pointer
 * @func: Function pointer
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
int print_d(va_list n);
void recursive_print(int num);
int num_count(int n);

#endif
