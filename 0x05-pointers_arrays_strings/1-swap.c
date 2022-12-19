#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * Return: nothing
 * @a: pointera
 * @b:pointerb
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
