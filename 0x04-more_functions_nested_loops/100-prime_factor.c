#include <math.h>
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0 at the end of the program
 */

int main(void)
{
	long int i = 612852475143;
	long int max;
	long int j;

	max = -1;

	while (i % 2 == 0)
	{
		max = 2;
		i = i / 2;
	}

	for (j = 3; j <= sqrt(i); j = j + 2)
	{
		while (i % j == 0)
		{
			max = j;
			i = i / j;
		}
	}

	if (i > 2)
		max = i;

	printf("%ld\n", max);

	return (0);
}
