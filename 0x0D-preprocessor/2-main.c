#include <stdio.h>
/**
 * main - program compilation starts from the main
 * Description: this program prints the name of the file it was compiled for
 * Return: 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
