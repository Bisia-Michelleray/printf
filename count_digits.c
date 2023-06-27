#include "main.h"

/**
 * counts - conts digits
 * @abs: digits to count
 *
 * Return: digits counted
 */

int counts(int abs)
{
	int tmp;
	int value;

	tmp = 0;
	value = abs;

	if (abs <= 0)
		tmp = tmp + 1;
	while (_absolute(value) != 0)
	{
		value = value / 10;
		tmp++;
	}
	return (tmp);
}
