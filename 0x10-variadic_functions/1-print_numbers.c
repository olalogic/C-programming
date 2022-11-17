#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: element to print as the separator.
 * @n: number of elements to print
 * @...: arguments to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vaList;
	unsigned int i = 0;

	va_start(vaList, n);

	while (i < n)
	{

		printf("%d", va_arg(vaList, int));
		i++;
		if (i < n && (separator))
			printf("%s", separator);
	}
	putchar(10);
	va_end(vaList);
}


