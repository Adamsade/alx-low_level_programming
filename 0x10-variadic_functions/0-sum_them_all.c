#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the num of para  passed to the fnction
 * @...: a variable number of parameters to calculate the sum
 * 
 * Return: if n == 0 return 0. otherwise the sum of all para
 */
int sum_them_all(const unsigned int, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for(i = 0; i < n; i++)
		sum += va_rg(ap, int);
	va_end(ap);
	return (sum);
}
