#include "main.h"

/**
 * print_binary - converts to binary
 * @v: argument
 * Returns: integer
 */
int print_binary(va_list v)
{
	int flag = 0;
	int cont = 0;
	int n, i = 1, num;
	unsigned int x = va_arg(v, unsigned int);
	unsigned int q;

	for (n = 0 ; n < 32 ; n++)
	{
		q = ((i << (32 - n)) & x);
		if (q >> (31 - n))
			flag = n;
		if (flag)
		{
			num = q >> (31 - n);
			_putchar(num + 48);
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
