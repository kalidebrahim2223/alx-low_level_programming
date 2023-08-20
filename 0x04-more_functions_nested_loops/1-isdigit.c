#include "main.h"

/**
 *_isdigit - determine whether digts
 *@c: the value
 *Return: 0 or 1
 */

int _isdigit(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
	{
		r = 0;
	}
	else
	{
		r = 1;
	}
	return (r);
}
