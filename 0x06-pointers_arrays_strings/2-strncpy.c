#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the string to be copied to
 * @src: the string to be copied
 * @n: numbers of characters to copy
 * Return: a pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}


