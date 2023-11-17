#include "main.h"
/**
 * print_exclusivestring - print exclusuives string.
 * @val: parameter.
 * Return: integer.
 */

int print_exclusivestring(va_list arg)
{
	char *t;
	int j, l = 0;
	int v;

	s = va_arg(val, char *);
	if (t == NULL)
		t = "(null)";
	for (j = 0; t[j] != '\0'; j++)
	{
		if (t[j] < 32 || t[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			l= l + 2;
			v = t[j];
			if (v < 16)
			{
				_putchar('0');
				l++;
			}
			l = l + print_HEX_ex(v);
		}
		else
		{
			_putchar(t[j]);
			l++;
		}
	}
	return (l);
}
