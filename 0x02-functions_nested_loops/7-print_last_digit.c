#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @l: value of last digit
 * Return: last digit l
 */
int print_last_digit(int l)
{
	int last_dig = l % 10;

	if (last_dig < 0)
		last_dig *= -1;

	_putchar(last_dig + '0');

	return (last_digit);
}
