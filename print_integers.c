#include "main.h"

/**
 * integer - prints an integer
 * @abs: integer to print
 *
 * Return: integer printed
 */

int integer(int abs)
{
	int tmp;
	unsigned int actual;

	tmp = counts(abs);
	if (abs < 0)
	{
		_putchar('-');
		actual = -abs;
	}
	else if (abs > 0)
		actual = abs;
	if (actual >= 10)
		integer(actual / 10);
	_putchar(actual % 10 + '0');
	return (tmp);
}
