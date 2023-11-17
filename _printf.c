#include "main.h"
#include <stdarg.h>

/**
 * _printf - function to select current funtion to print
 * @format: indentifier to look for
 *
 * Return: length of string
 */
int _printf(const char * const format, ...)
{
	struct change k[] = {
		{"%s", print_str},
		{"%c", print_char},
		{"%%", print37},
		{"%i", print_inte},
		{"%d", print_deci},
		{"%b", print_bin},
		{"%R", print_rot_13},
		{"%X", print_HEX_ex},
		{"%x", print_HEXA},
		{"%S", print_exclusivestring},
		{"%o", print_OCT},
		{"%r", print_stringrev},
		{"%p", print_pointerhex}

	};

	va_list arg;
	int i = 0, j, len = 0;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(arg);
		return (-1);
	}

	while (format[i] != '\0')
	{
		
		j = 14;
		while (j >= 0)
		{
			if (k[j].v[0] == format[i] && k[j].v[1] == format[i + 1])
			{
				len += k[j].myfunct(arg);
				i = i + 2;
goto This;
			}
			j--;

		}
		_putchar(format[i]);
		len++;
		i++;
This:
		continue;
	}
	va_end(arg);
	return (len);
}
