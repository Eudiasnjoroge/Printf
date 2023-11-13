#include "main.h"

/**
 * _printf_char - print character
 * @val: argument
 * Return: 1
 */

int _printf_char(va_list, val)
{
	char i;

	i = va_arg(val, int);
	_putchar(i);
	return (1);
}
