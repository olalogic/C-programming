#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: size of argv
 * @argv: name of program any other arguments.
 * Return: 0 at the end
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

