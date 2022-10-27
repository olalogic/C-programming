#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string to be concatenated
 * @src: the string that will be concatenated
 * @n: number of characters
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;

	}
	dest[i + j] = '\0';

	return (dest);
}

