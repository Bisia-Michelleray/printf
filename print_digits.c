#include "main.h"

/**
 * print_num - prints a number
 * @num: num to print
 *
 * Return: number of characters printed
 */

int print_num(va_list num)
{
	int abs = va_arg(num, int);
	int final;

	final = integer(abs);
	return (final);
}
