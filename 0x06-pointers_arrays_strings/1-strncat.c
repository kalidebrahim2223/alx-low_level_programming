#include "main.h"

/**
 * _strncat - concatinate twp string
 * @dest: destination string
 * @src: source string
 * @n: number
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
