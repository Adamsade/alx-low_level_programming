#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to y
 * @x: the value to be powered
 * @y: the value raised of x
 * Return: xpow y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
