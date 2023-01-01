#include <stdio.h>
#include "main.h"
/**
 * main - print the number from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print buzz instead of the number
 * 3 & 5 multiples print FizzBuzz
 * Return: Always 0
 */
int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
