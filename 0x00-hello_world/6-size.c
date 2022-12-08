#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizof(char));
	printf("Size of an int: %i byte(s)\n", sizof(int));
	printf("Size of a long int: %i byte(s)\n", sizof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizof(long long int));
	printf("Size of a float: %i byte(s)\n", sizof(float));
	return (0);
}
