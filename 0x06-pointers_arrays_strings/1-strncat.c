#include "main.h"

/**
 * _strncat - conacatenates strings
 * @dest: funcion parameter
 * @src: function parameter
 * @n: function parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length = strlen(dest);

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[length + i] = *src;
		src++;
	}
	dest[length + i] = '\0';
	return (dest);
}
