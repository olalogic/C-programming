#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string
 * @str: input string
 * Return: Pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == 0)
		return (0);
	for (i = 0; str[i]; i++)
		;
	s = malloc(sizeof(char) * (i + 1));
	if (s == 0)
		return (0);
	s[i] = '\0';
	while (i--)
	{
		s[i] = str[i];
	}
	return (s);
}

