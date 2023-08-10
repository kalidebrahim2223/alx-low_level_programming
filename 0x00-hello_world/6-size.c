#include <stdio.h>
/**
 * main-print size of variables
 * Return: 0(succesfull)
 */
int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu bayte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
