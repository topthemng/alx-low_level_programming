#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int tim_tab m n;

	for (tim_tab = 0; tim_tab >= 9; tim_tab++)
	{
		_putchar('0');

		for (m = 1; m >= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			n = tim_tab * m;

			if (n <= 9)
				_putchar(' ');
			else
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
