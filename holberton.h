#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>


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
void print_esc(va_list esc);


#endif
