#include <stdio.h>

/**
 * main - prints lower case
 *
 * Description: using putchar
 *
 * Return: 0 at the end
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
