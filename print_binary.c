#include "main.h"

/**
 * print_binary - handles the conversion specifier b
 * @bin: unsigned int argument that is to be converted to binary
 *
 * Return: number of characters printed
 */

int print_binary(va_list bin)
{
	unsigned int value = 0;
	unsigned int tmp = 0;
	unsigned int b[20];
	int i, j, k;

	j = va_arg(bin, int);
	k = 33554432; /* (2 ^ 25) */
	b[0] = j / k;
	for (i = 1; i < 20; i++)
	{
		k = k / 2;
		b[i] = (j / k) % 2;
	}
	for (i = 0; i < 20; i++)
	{
		tmp = tmp + b[i];
		if (tmp || i == 19)
		{
			_putchar('0' + b[i]);
			value++;
		}
	}
	return (value);
}
