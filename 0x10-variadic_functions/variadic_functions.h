#ifndef _HEADER_FILE_
#define _HEADER_FILE_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct ch_fmt - sees if the format matches
 * @c: the char of the format
 * @f: function to make
 */
typedef struct ch_fmt
{
	char c;
	void (*f)(va_list);
} fmt_type;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char (va_list a);
void print_int (va_list a);
void print_float (va_list a);
void print_string(va_list a);
#endif
