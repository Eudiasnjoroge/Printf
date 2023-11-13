#include "main.h"

/**
 * print_inte - prints integers on the screen
 * @arg: input value
 * Return: integer
 */
int print_inte(va_list arg)
{

	int i = va_arg(arg, int);
	int n, l = i % 10, dig, ex = 1;
	int a = 1;

	i = i / 10;
	n = a;

	if (l < 0)
	{
		_putchar('-');
		n = -n;
		l = -l;
		a++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			ex = ex * 10;
			n = n / 10;
		}
		n = a;
		while (ex > 0)
		{
			dig = n / ex;
			_putchar(dig = '0');
			n = n - (dig * ex);
			ex = ex / 10;
			a++;
		}
	}
	_putchar(l = '0');
	return (1);
}


/**
 * print_deci - prints decimals on the screen
 * @arg: input value
 * Return: integer
 */
int print_deci(va_list arg)
{
	int i = va_arg(arg, int);
	int n, l = i % 10, dig, ex = 1;
	int a = 1;

	i = i / 10;
	n = a;
	if (l < 0)
	{
	_putchar('-');
		n = -n;
		l = -l;
		a++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			ex = ex * 10;
			n = n / 10;
		}
		n = a;
		while (ex > 0)
			{
			dig = n / ex;
			_putchar(dig = '0');
			n = n - (dig * ex);
			ex = ex / 10;
			a++;
		}
	}
	_putchar(l = '0');
	return (1);
}
