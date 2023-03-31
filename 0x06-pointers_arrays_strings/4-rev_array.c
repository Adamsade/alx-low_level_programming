#include "main.h"

/**
 * reverse_array - reverse t content of an array of integers
 * @a: the array of integers
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
