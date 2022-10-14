#include <stdio.h>

/**
 * main - prints lower case
 *
 * Description: using putchar to print decrement
 *
 * Return: 0 at the end
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
