#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check
 * Return: the length of string s
 */

int _strlen(char *s)
{
	int index;

	index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	return (index);
}
