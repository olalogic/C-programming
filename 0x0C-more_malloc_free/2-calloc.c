#include "main.h"
#include <stdlib.h>


/**
 * _bzero - set all the nbyte to 0
 * @dst: pointer to allocate memory
 * @size: byte of memory
 * Return: a pointer to the allocated memory
 */

void *_bzero(void *dst, unsigned int size)
{
	char *d = dst;

	do
		* d++ = 0;
	while (--size != 0);

	return (d);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number elements.
 * @size: size of the type.
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	_bzero(ptr, nmemb * size);
	return (ptr);
}

