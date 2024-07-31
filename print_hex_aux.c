#include "main.h"

/**
 * print_hex_aux - function prints an hexgecimal no.
 * @num: arguments
 * Return: counter
 */
int print_hex_aux(unsigned long int num)
{
	long int x;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (x = 0; x < counter; x++)
	{
		array[x] = temp % 16;
		temp /= 16;
	}
	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
<<<<<<< HEAD
		array[x] = array[x] + 39;
=======
			array[x] = array[x] + 39;
>>>>>>> 66d019c2892053f67ebb7f56bcbaddc2d084f570
		_putchar(array[x] + '0');
	}
	free(array);
	return (counter);
}
