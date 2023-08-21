#include "main.h"

/**
 * swap_int - swap the value of a and b
 * @a: value of a
 * @b: value of b
 * Return: o always
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
