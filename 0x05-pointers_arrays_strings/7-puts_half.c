#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print half
 */

void puts_half(char *str)
{
	int length, n, m;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (m = length / 2; str[m] != '\0'; m++)
		{
			_putchar(str[m]);
		}
	}
	else if (length % 2)
	{
		for (n = (length - 1) / 2; n < length - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
