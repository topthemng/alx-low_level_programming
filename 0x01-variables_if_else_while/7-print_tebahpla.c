#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int teb;

	for (teb = 'z'; teb >= 'a'; teb--)
		putchar(teb);
	putchar('\n');
	return (0);
}
