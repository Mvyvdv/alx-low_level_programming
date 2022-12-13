#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints time table with provided number
 * @n: the provided value by the user
 * Return: Always 0
 */
void print_times_table(int n)
{
	int row;
	int col;
	int prod;

	if (n < 0 || n >= 15)
		return;
	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			prod = (row * col);
			if (col == 0)
				_putchar('0' + prod);
			else
			{
				_putchar(',');
				_putchar(' ');
				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod);
				}
				else if (prod >= 100)
				{
					_putchar('0' + (prod / 100));
					_putchar('0' + ((prod / 10) % 10));
					_putchar('0' + (prod % 100));
				}
			}
		}
		_putchar('\n');
	}
}
