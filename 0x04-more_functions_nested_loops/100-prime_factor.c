#include <stdio.h>
#include "main.h"

/**
 * main - print prime factors
 * Return: prime factors
 */

int main(void)
{
	long int i, n = 612852475143;

	for (i = 2; i < n; i = i++)
	{
		while (n % i == 0)
			n = n / i;
	}
	print("%lu\n", n);
	return (0);
}
