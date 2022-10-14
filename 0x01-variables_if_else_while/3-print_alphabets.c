#include <stdio.h>

/**
 * main - prints lower and upper case
 *
 * Description: using putchar
 *
 * Return: 0 at the end
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
