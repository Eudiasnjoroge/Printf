#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>




/**
 * struct format - prints to screen like on screen
 * @v: pointer to specifier
 * @myfunct: the function for specifier
 *
 */

typedef struct change
{
	char *v;
	int (*myfunct)(va_list arg);
} change;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int _strlength(char *s);
int const_strlength(const char *s);
int print37(va_list arg);
int print_HEXA(va_list arg)
int print_deci(va_list arg);
int print_inte(va_list arg);
int print_stringrev(va_list arg);
int print_pointerhex(va_list arg);
int print_exclusivestring(va_list arg);
int print_rot_13(va_list arg);
int print_HEX_ex(unsigned int num);
int print_bin(va_list arg);
int print_OCT(va_list arg);



#endif
