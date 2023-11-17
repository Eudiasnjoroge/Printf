#include "main.h"

/**
 * print_OCT - print an octal
 * @val: input value
 * Return: counter
 */
int print_OCT(va_list val)
{
	int j;
	int *ar;
	int count = 0;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int t = n;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	ar = malloc(count * sizeof(int));

	for (j = 0; j < count; j++)
	{
		array[j] = t % 8;
		t /= 8;
	}
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(ar[j] + '0');
	}
	free(ar);
	return (count);
}

