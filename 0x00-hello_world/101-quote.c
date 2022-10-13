#include <unistd.h>

/**
 * main - prints exactly the needed string
 *
 * Description: This is a script that uses write fucntion
 *
 * Return: 0 at the end.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
