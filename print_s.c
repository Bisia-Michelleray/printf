#include "main.h"

/**
 * print_str - prints conversion specifier s
 * @st: character format
 *
 * Return: number of characters printed
 */

int print_str(va_list st)
{
	char *string = va_arg(st, char *);
	int counter;

	if (string == NULL)
		string = "(null)";
			counter = _puts(string);
	return (counter);
}
