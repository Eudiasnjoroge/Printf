#include "main.h"

/**
 * print_exclusive_string - function that print exclusuives str
 * @val: argument
 * Return: length of string
 */

int print_exclusive_string(va_list val)
{
	char *s;
	int a, len = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] < 32 || s[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[a];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_aux(cast);
		}
		else
		{
			_putchar(s[a]);
			len++;
		}
	}
	return (len);
}

