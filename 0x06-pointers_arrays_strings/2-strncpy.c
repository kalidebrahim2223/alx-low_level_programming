#include "main.h"

/**
 * _strncpy - copy the string
 * @dest b:destination
 * @src: source
 * @n: number
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


