#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination copy
 * @src: source copy
 * @n: integer
 * Return: string copied from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
