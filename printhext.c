#include "main.h"

/**
 * print_HEXA-ex - prints  hexadecimal
 * @num: input value 
 * Return: counter.
 */
int print_HEX_ex(unsigned int num)
{
	int a;
	int *ar;
	int count = 0;
	unsigned int t = n;

	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;
	ar = malloc(count * sizeof(int));

	for (a = 0; a < count; a++)
	{
		ar[a] = t % 16;
		tem /= 16;
	}
	for (a = count - 1; a >= 0; a--)
	{
		if (ar[a] > 9)
			ar[a] = ar[a] + 7;
		_putchar(array[a] + '0');
	}
	free(ar);
	return (count);
}
