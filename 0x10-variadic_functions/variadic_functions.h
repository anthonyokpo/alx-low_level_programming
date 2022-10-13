#ifndef VARIADIC_FUNCTIONS_HEADER_FILE
#define VARIADIC_FUNCTIONS_HEADER_FILE
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_types - Struct format_types
 * @identifier: The conversion specifier
 * @f: The function pointer
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

#endif
