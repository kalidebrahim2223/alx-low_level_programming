#include "main.h"

/**
 * _memset - memory set
 * @s: the array
 * @n: number of array
 * @b:set all memory this value
 * Return: nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
