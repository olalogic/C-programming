#ifndef MAIH_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_bzero(void *dst, unsigned int size);
int *array_range(int min, int max);void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int contains_non_numeric(char *str);
int _atoi(char *s);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void move_int_end_to_beg(char *str, int size, char fill);
char *multiply_strings(char *s1, char *s2, char *buff, unsigned int size_b);
void *set_mem(void *p, unsigned int nmemb, unsigned int size, char ch);
void *_calloc(unsigned int nmemb, unsigned int size);
int _strlen(char *s);

#endif
