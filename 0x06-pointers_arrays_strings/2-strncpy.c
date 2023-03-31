#include "main.h"

/**
 * _strncpy - copies at most inputted number of bytes from string src into dest
 * @dest: the buffer storing the string  copy
 * @src: th source string
 * @n: the maximum number of bytes to copied from src
 * Return: a pointerr to the resulting strin dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)	       dest[index] = src[index];
	for (index = src_len; index < n; index++)
	dest[index] = '\0';
	return (dest);
}
