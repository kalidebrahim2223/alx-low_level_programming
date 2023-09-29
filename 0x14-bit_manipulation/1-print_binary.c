#include "main.h"

/**
 * print_binary - int to binary
 * @n:input
 */

void print_binary(unsigned long int n)
{
	unsigned int i, j, c, d;

	j = n;
	c = 1;
	if (n == 0)
		_putchar('0');
	for (i = 0; j != 0; i++)
	{
		j >>= 1;
		c <<= 1;
	}
	for (d = i; d > 0; d--)
	{
		c >>= 1;
		j = c & n;
		if ( j == 0)
		{
			_putchar('0');
		}else
		{
			_putchar('1');
		}
	}
}
