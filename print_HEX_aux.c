#include "main.h"

/**
 * print_HEX_aux - function that prints an hexgecimal
 * @num: arguments
 * Return: counter
 */
int print_HEX_aux(unsigned int num)
{
	int a;
	int *array;
	int counter = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (a = 0; a < counter; a++)
	{
		array[a] = temp % 16;
		temp /= 16;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		if (array[a] > 9)
<<<<<<< HEAD
		array[a] = array[a] + 7;
=======
			array[a] = array[a] + 7;
>>>>>>> 66d019c2892053f67ebb7f56bcbaddc2d084f570
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}
