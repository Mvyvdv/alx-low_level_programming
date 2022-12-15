#include "main.h"

/**
 * print_line - prints line
 * @n: param
 */

void print_line(int n)
{
	int i;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
