#include "main.h"

/**
 * _printf_char - print character
 * @arg: argument
 * Return: 1
 */

int _printf_char(va_list arg)
{
	char i;

	i = va_arg(arg, int);
	_putchar(i);
	return (1);
}
