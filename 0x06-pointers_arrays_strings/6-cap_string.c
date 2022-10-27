#include "main.h"

/**
* cap_string - capitalizes all words of a string.
* @n: string to be capitalized
* Return: pointer to the resulting string.
*/

char *cap_string(char *n)
{
	int i, j, cap = 32;

	int sep[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (j = 0; j <= 12; j++)
		{
			if (n[i] == sep[j])
			{
				j = 12;
				cap = 32;
			}
		}
	}
	return (n);
}


