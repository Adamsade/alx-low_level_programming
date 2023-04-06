#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first string to be compared
 * @s2: the string to compare
 * Return: 0 and 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	else 
		return (0);
}
