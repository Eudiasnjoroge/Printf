#include "main.h"

/**
 * print_char - function that  prints a char
 * @val: arguments
 * Return: Zero
 */
int print_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
}
