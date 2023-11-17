#include "main.h"

/**
 * print_revs - prints a string in reverse
 * @args: input value
 *
 * Return: string
 */
int print_stringrev(va_list arg)
{

	char *t = va_arg(arg, char*);
	int a;
	int b = 0;

	if (t == NULL)
		t = "(null)";
	while (t[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(t[a]);
	return (b);
}
