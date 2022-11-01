#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers.
 * @a: number of diagonals
 * @size: the size of the the array.
 */

void print_diagsums(int *a, int size)
{
	int i, j, row, col;

	i = 0;
	j = 0;
	row = 0;
	col = 0;
	while (row < size)
	{
		i += *(a + row  * size + col);
		j += *(a + row  * size + (size - 1 - col));
		col++;
		row++;
	}
	printf("%d, %d\n", i, j);
}

