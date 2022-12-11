#include <stdio.h>

/**
 * main - print alphabet in lowercase and upper case
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lowHigh;

	for (lowHigh = 'a'; lowHigh <= 'z'; lowHigh++)
		putchar(lowHigh);
	for (lowHigh = 'A'; lowHigh <= 'Z'; lowHigh++)
		putchar(lowHigh);
	putchar ('\n');
	return (0);
}
