#include "main.h"

/**
 * print_char - prints a character  on tthe screen
 * @list: input value
 * Return: a 1
 */

int print_char(va_list list)
{
	char s;

	s = va_arg(v, int);
	_putchar(s);
	return (1);
}
