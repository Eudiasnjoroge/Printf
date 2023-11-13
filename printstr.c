#include "main.h"


/**
 * print_str - prints a string on the screen
 * @list: input value
 * Return: length of string
 */
int print_str(va_list list)
{
	char *s;
	int j;
	int len;

	s = va_arg(list, char*);
	if (s == NULL)
	{
		s == "(NULL)";
ii		len = _strlength(s);
		for (j = 0 ; j < length ; j++)
			_putchar(s[a]);
		return (len);
	}
	else
	{
		len = _strlength(s);
		for (j = 0 ; j < length ; j++)
		_putchar(s[a]);
		return (len);
	}
}
