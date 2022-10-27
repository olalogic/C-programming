#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: string to be encoded
 * Return: pointer to encoded string
 */

char *leet(char *n)
{
	int i, j;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int e[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == find[j])
			{
				n[i] = e[j / 2];
				j = 9;
			}
		}
	}

	return (n);
}
