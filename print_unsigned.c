#include "main.h"
/**
 * print_unsigned - function that prints integer
 * @args: argument
 * Return: number int printed
 */
int print_unsigned(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);
	int num, last = x % 10, digit, exp = 1;
	int  j = 1;

	x = x / 10;
	num = x;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		x = -x;
		last = -last;
		j++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = x;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(last + '0');

	return (j);
}
