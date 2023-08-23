#include "main.h"
/**
 * _strcat - concatinet two string
 *  @dest:destinaction string
 * @src:source string
 * Return:string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		i++;
		dest[i] = src[j];
	}
	dest[i + 1] = '\0';
return (dest);
}
