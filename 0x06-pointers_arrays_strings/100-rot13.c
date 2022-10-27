#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: string to encode
 * Return: encoded strings
 */

char *rot13(char *n)

{
	int i = 0;

	while (n[i] != '\0')
	{
		while (((n[i] >= 'a' && n[i] <= 'm') || (n[i] >= 'A' && n[i] <= 'M')))
		{
			n[i] += 13;
			i++;
		}
		if ((n[i] >=  'n' && n[i] <= 'z') || (n[i] >=  'N' && n[i] <= 'Z'))
			n[i] -= 13;
		i++;
	}
	return (n);
}

