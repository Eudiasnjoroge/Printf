#include "main.h"

/**
 * _printf - function to select current funtion to print
 * @format: indentifier to look for
 * Return: length of string
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", _strlength}, {"%c", printf_char},
		{"%%", print37},
		{"%i", print_inte}, {"%d", print_deci},
		{"%b", print_binary},
		{"%o", print_octa}, {"%x", print_hexa},
		{"%S", _strlength}
	};

	va_list arg;
	int i = 0, j, len = 0;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				len += p[j].function(arg);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(arg);
	return (len);
}
