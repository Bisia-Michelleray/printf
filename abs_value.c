#include "main.h"

/**
 * _absolute - finding the absolute value
 * @abs: value to calculate
 *
 * Return: absolute value
 */

int _absolute(int abs)
{
	if (abs < 0)
		return (-1 * abs);
	else
		return (abs);
}
