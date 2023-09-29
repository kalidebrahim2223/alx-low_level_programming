#include <unistd.h>
/**
 * _putchar- print single character
 *@c: character
 *Return:display
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
