#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: bytes to search
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count, checker;

	i = 0;
	j = 0;
	checker = 0;
	count = 0;
	while (s[i] != '\0')
	{
		j = 0;
		checker = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
				checker = 1;
				break;
			}
			j++;
		}

		if (checker == 0)
			return (count);
		i++;
	}
	return (count);
}


