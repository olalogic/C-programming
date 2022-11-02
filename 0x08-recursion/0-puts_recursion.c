#include "main.h"

/**
 * _puts_recursion - prints a string follow by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
	}
	_putchar(*s);
}

