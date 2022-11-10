#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to allocate.
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}

