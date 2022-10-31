#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory aread
 * @src: memory area to copy from
 * @n: number of bytes to copy from memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}


