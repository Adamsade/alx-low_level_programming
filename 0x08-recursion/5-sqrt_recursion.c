#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the natural square root
 * Return: the natursl sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculate naturl sqrt
 * @n: number to calculte sqrt
 * @i: iterate number
 * Return: the natural sqrt
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
