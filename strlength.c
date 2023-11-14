#include "main.h"

/**
 * _strlength - Returns string length
 * @s: string pointer
 * Return: i
 */
int _strlength(char *s)
{
	int n;

	for (n = 0 ; s[n] != 0 ; n++)
		;
	return (n);
}
/**
 * _strlength - prints string lengthr
 * @s: points s
 * Return: n
 */
int _strlength(const char *s)
{
	int n;

	for (n = 0 ; s[n] != 0 ; n++)
		;
	return (n);
}
