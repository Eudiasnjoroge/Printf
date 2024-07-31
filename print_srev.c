#include "main.h"

/**
 * print_srev - function that prints a string reverse
 * @args: arguments
 *
 * Return:string
 */
int print_srev(va_list args)
{
<<<<<<< HEAD
=======

>>>>>>> 66d019c2892053f67ebb7f56bcbaddc2d084f570
	char *s = va_arg(args, char*);
	int a;
	int b = 0;

	if (s == NULL)
		s = "(null)";
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(s[a]);
	return (b);
}
<<<<<<< HEAD

=======
>>>>>>> 66d019c2892053f67ebb7f56bcbaddc2d084f570
