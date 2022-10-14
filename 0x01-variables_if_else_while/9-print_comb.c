#include <stdio.h>

/**
 * main - prints
 *
 * Description: possible combinations of single-digit numbers
 *
 * Return: 0 at the end
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
