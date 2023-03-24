#include "main.h"

/**
 * _isupper _ print uppercase letters
 * @c: the characters to be checked
 *
 * Return: 1 for all uppercases or 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
