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
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
