#include "main.h"

/**
 * reverse_array - revers intiger
 * @a: array of int
 * @n:number of array
 * Return: array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;
	int j = 0;

	for (i = n / 2; i > 0; i--)
	{
		n--;
		tmp = a[j];
		a[j] = a[n];
		a[n] = tmp;
		j++;
	}
	
}

