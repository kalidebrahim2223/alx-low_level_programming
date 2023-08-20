#include "main.h"
/**
 *_isupper - separeat isupper or lower case
 * Return: 1 0r 0
 * @c:the value
 */

int _isupper(int c)
{
	char i;
	int r = 1;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			r = 0;
			break;
		}
	}
	if (r == 1)
	{
		for (i = 'A'; i <= 'Z'; i++)
		{
			if (c == i)
			{
				r = 1;
				break;
			}
		}
	}
	return (r);
}
