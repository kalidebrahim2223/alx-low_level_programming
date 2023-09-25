#include <unistd.h>
/**
 *_putchar-write character
 *@c: character to be displayed
 * Return: unsecces 9-0 success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
