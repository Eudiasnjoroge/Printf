#include "main.h"

/**
 * print_binary - prints binary no
 * @val: input value
 * Return: int
 */
int print_bin(va_list arg)
{
	int f = 0;
	int conti = 0;
	int j, b = 1, c;
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int o;

	for (j = 0; j < 32; j++)
	{
		o = ((b << (31 - j)) & n);
		if (o >> (31 - j))
			f = 1;
		if (f)
		{
			b = o >> (31 - j);
			_putchar(b + 48);
			conti++;
		}
	}
	if (conti == 0)
	{
		conti++;
		_putchar('0');
	}
	return (conti);
