#include "main.h"

/**
 * _puts_recursion - print astring
 * @s: the string to print
 * Return: nothing
 */
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
