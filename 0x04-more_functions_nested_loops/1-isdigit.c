#include "main.h"

/**
 *_isdigit - determine whether digts
 *@c: the value
 *Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
