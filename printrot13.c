#include "main.h"
/**
 * print_rot_13 - converts to rot13
 * @args: printf arguments
 * Return: counter
 *
 */
int print_rot_13(va_list args)
{
	int a, b, count = 0;
	int c = 0;
	char *t = va_arg(args, char*);
	char all[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bll[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (t == NULL)
		t = "(null)";
	for (a = 0; t[a]; a++)
	{
		c = 0;
		for (b = 0; all[b] && !c; b++)
		{
			if (t[a] == all[b])
			{
				_putchar(bll[b]);
				count++;
				c = 1;
			}
		}
		if (!c)
		{
			_putchar(t[a]);
			count++;
		}
	}
	return (count);
}
