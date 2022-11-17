#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdarg.h>
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_all(const char * const format, ...);
void pr_str(va_list val);
void pr_float(va_list val);
void pr_char(va_list val);
void pr_int(va_list val);

typedef struct print_ops
{
	char *op;
	void (*f)(va_list);
} p_op;


#endif
