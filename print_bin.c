#include "main.h"

/**
 * print_bin - function that prints a binary
 * @val: argument
 * Return: Zero
 */
int print_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int x, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int po;

	for (x = 0; x < 32; x++)
	{
		po = ((a << (31 - x)) & num);
		if (po >> (31 - x))
			flag = 1;
		if (flag)
		{
			b = po >> (31 - x);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
