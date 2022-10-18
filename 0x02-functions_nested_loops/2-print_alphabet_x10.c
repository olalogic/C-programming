#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Description: prints 10 times
 *
 * Return: 0 after programme is executed
 */

void print_alphabet_x10(void)

{
	char alphabet;
	int i = 0;

	while (i < 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
