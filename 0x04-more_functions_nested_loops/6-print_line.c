#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of lines to print
 */

void print_line(int n)

{
	int m;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
