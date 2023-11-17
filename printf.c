#include "main.h"
#include <stdarg.h>
/**
 * main_printf - prints on the screen
 * @format: identifies format used
 * Return: string length
 */
int main_printf(const char * const format, ...)
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
	int a = 0, b, len = 0;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(arg);
		return (-1);
	}
	while (format[a] != '\0')
	{
		b = 14;
		while (b >= 0)
		{
			if (k[b].v[0] == format[a] && k[b].v[1] == format[a + 1])
			{
				len += k[b].myfunct(arg);
				a = a + 2;
				goto This;
			}
			b--;
		}
		_putchar(format[a]);
		len++;
		a++;
This:

	continue;
	}
	va_end(arg);
	return (len);
}
