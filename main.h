#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - produces output according to a format
 * @spec: char pointer of the conversion specifiers
 * @f: type pointer to function for the conversion specifier
 */

typedef struct format
{
	char *spec;
	int (*f)(va_list);
} convert_func;

int _putchar(char c);
int _printf(const char *format, ...);
int handle_spec(char c_sp, va_list args);
int print_char(va_list ch);
int print_str(va_list st);
int print_mod(va_list args);
int _puts(char *string);
int integer(int abs);
int counts(int abs);
int print_num(va_list num);
int _absolute(int abs);
int print_binary(va_list bin);

#endif
