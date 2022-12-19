#include "main.h"
/**
 * _isalpha - check for lowercase or upercase
 * @c: letter to be checked
 * Return: 1 if c is a letter, 0 if not
 */
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z' || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
