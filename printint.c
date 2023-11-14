#include "main.h"

/**
 * print_inte - print integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_inte(va_list arg)
{
	int i = va_arg(arg, int);
	int n, last = i % 10, dig, x = 1;
	int a = 1;

	i = 1 / 10;
	n = i;

	if (last < 0)
	{
		_putchar('-');
		n = -n;
		last = -last;
		a++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			x = x * 10;
			n = n / 10;
		}
		n = i;
		while (x > 0)
		{
			digit = n / x;
			n = n - (digit * x);
			x = x / 10;
			a++;
		}
	}
	_putchar(last + '0');

	return (a);
}
#include "main.h"
/**
 * print_deci - prints decimals
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_deci(va_list arg)
{
	int i = va_arg(arg, int);
	int n, last = i % 10, digit, exp = 1;
	int a = 1;

	i = 1 / 10;
	n = i;

	if (last < 0)
	{
		_putchar('-');
		n = -n;
		last = -last;
		a++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			x = x * 10;
			n = n / 10;
		}
		n = i;
		while (x > 0)
		{
			digit = n / x;
			n = n - (digit * x);
			x = x / 10;
			a++;
		}
	}
	_putchar(last + '0');

	return (a);
}
