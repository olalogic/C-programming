#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @n: number of bytes of the memory area
 * @s: pointer to memory
 * Return: A pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		s[index] = b;
		index++;
	}

	return (s);
}

