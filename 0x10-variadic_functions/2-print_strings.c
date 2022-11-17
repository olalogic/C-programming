#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator to print
 * @n: number of arguments to print.
 * @...: string to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list varList;
	unsigned int i;
	char *r;

	va_start(varList, n);
	i = 0;
	while (i < n)
	{
		r = va_arg(varList, char*);
		if (!r)
			printf("(nil)");
		else
			printf("%s", r);
		i++;
		if (i < n && separator)
			printf("%s", separator);
	}
	putchar(10);
	va_end(varList);
}

