#include "main.h"

/**
 * _printf_char - print character
 * @va: argument
 * Return: 1
 */

int _printf_char(va_list, va)
{
	char i;

	i = va_arg(va, int);
	_putchar(i);
	return (1);
}
