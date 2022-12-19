#include "main.h"

/**
 * print_alphabet_x10 -prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int ten_times;
	char la;

	for (ten_times = 0; ten_times <= 9; ten_times++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);

		_putchar('\n');
	}
}
