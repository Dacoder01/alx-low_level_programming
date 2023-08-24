#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: function parameter
 * @src: function parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int lengthOfdest = 0;
	int lengthOfsrc = 0;

	for (i = 0; dest[i] != '\0'; i++)
		lengthOfdest++;
	for (i = 0; src[i] != '\0'; i++)
		lengthOfsrc++;
	for (i = 0; i <= lengthOfsrc; i++)
		dest[lengthOfdest + i] = src[i];
	return (dest);
}
