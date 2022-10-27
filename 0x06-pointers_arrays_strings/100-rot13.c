#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: string to encode
 * Return: encoded strings
 */

char *rot13(char *n)
{
	int x, e = 13, i = 0;
	char replace[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P',
		'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f',
		's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v',
		'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M',
		'Z', 'm', 'z'};

	while (n[i] != '\0')
	{
		for (x = 0; x <= 51; x++)
		{
			if (n[i] == replace[x])
			{
				n[i] = n[i] + e;
				x = 51;
			}
			e = e * -1;
		}
		i++;
	}
	return (n);
}

