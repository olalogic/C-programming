#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to search
 * @needle: string to search for.
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, n;

	i = 0;
	j = 0;
	n = 0;
	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			n = 1;
			j++;

		}
		else
		{
			n = 0;
			j = 0;
		}

		if (needle[j] == '\0' && n == 1)
			return ((haystack + i - j + 1));
		else if (needle[j] == '\0' && n == 0)
			return (haystack);
		i++;
	}

	return (NULL);
}


