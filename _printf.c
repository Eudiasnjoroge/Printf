#include "main.h"
/**
 * _printf - function that selects the correct function to print
 * @format: identifier to look for
 * Return: length of the string
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_37},
		{"%i", print_int}, {"%d", print_dec}, {"%r", print_srev},
		{"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exclusive_string}, {"%p", print_pointer}
	};

	va_list args;
	int  a = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[a] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[a] && m[j].id[1] == format[a + 1])
			{
				len += m[j].f(args);
				a = a + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[a]);
		len++;
		a++;
	}
	va_end(args);
	return (len);
}

