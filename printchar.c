#include "main.h"

/**
 * print_char - prints a character  on tthe screen
 * @arg: input value
 * Return: one
 */

int print_char(va_list arg)
{
	char s;

	s = va_arg(arg, int);
	_putchar(s);
	return (1);
}
