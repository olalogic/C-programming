#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: contains the bytes in the string to be located
 * Return: pointer to the byte in s that matches one of the byes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return ((s + i));
			j++;
		}
		i++;
	}
	return (NULL);
}


