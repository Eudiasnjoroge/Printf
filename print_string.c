#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> 66d019c2892053f67ebb7f56bcbaddc2d084f570
/**
 * print_string -function that print string
 * @val: parameter
 * Return: length of string
 */

int print_string(va_list val)
{
	char *s;
	int j, leng;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		leng = _strlen(s);
		for (j = 0; j < leng; j++)
			_putchar(s[j]);
		return (leng);
	}
	else
	{
		leng = _strlen(s);
		for (j = 0; j < leng; j++)
			_putchar(s[j]);
		return (leng);
	}
}
