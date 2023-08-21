#include "main.h"

/**
 * print_rev - revers string
 * @s: string
 * Return: o
 */

void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; i >= j; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
