#include "main.h"

/**
 * _is_prime_number - return if number is prime
 * @n: the number to be checked
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1);
}
/**
 * check_prime - check if number is prime
 * @n: the number to e checked
 * @i: the iteration times
 * Return: integer value
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_pime(n, i + 1));
}
