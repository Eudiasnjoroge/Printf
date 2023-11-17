
#include "main.h"

/**
 * print_pointerhex - prints a pointer
 * @arg: input value.
 * Return: pointer.
 */
int print_pointerhex(va_list arg)
{
	void *p;
	char *t = "(nil)";
	long int y;
	int z;
	int j;

	p = va_arg(arg, void*);
	if (p == NULL)
	{
		for (j = 0; t[j] != '\0'; j++)
		{
			_putchar(t[j]);
		}
		return (j);
	}

	y = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	z = print_hex_extra(y);
	return (z + 2);
}

