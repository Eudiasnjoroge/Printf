#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - prints to screen like printf
 * @v: pointer to specifier
 * @myfunct: the function for specifier
 *
 */
typedef struct format
{
	char *v;
	int (*myfunct)();
} change;


int _putchar(char c);
int _printf(const char *format, ...);
int _printf_char(va_list, val);
int _print_str(va_list list);
int _strlength(char *s);
int _strlength(const char *s);
int print37(void);
int print_deci(va_list arg);
int print_inte(va_list arg);
int print_binary(va_list v);
int print_octa(va_list v);
int print_hexa(va_list v);

#endif
