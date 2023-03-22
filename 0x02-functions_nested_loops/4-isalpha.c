#include "main.h"

/**
 * _isalpha - function to check alphabet
 * @c: parameter to be checked
 *
 * Return: 1 if it checks alphabet and 2 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
