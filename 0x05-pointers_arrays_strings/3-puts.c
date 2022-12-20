#include "main.h"

/**
 * _puts - prints a string followed by a fresh line
 * @str: input string
 * Return: no return
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != `\0`; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
