#include "main.h"

/**
 * print_HEX - function that prints an hexgecimal
 * @val: arguments
 * Return: counter
 */
int print_HEX(va_list val)
{
	int x;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (x = 0; x < counter; x++)
	{
		array[x] = temp % 16;
		temp /= 16;
	}
	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
<<<<<<< HEAD
		array[x] = array[x] + 7;
=======
			array[x] = array[x] + 7;
>>>>>>> 66d019c2892053f67ebb7f56bcbaddc2d084f570
		_putchar(array[x] + '0');
	}
	free(array);
	return (counter);
}
