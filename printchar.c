#include "main.h"

/**
 * print_char - prints a character  on tthe screen
 * @va: input value
 * Return: one
 */

int print_char(va_list va)
{
	char s;

	s = va_arg(va, int);
	_putchar(s);
	return (1);
}
