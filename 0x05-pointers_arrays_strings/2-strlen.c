#include "main.h"

/**
 * _strlen - length of string
 * @s: function parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; ++i)
		length++;

	return (length);
}
