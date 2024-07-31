#include "main.h"
/**
 * _strlen - function that returns the lenght of string
 * @s: pointer
 * Return: c
 */
int _strlen(char *s)
{
	int ch;

	for (ch = 0; s[ch] != 0; ch++)
		;
	return (ch);

}
/**
 * _strlenc - function for constant char pointer s
 * @s: pointer to char
 * Return: c
 */
int _strlenc(const char *s)
{
	int ch;

	for (ch = 0; s[ch] != 0; ch++)
		;
	return (ch);
}
