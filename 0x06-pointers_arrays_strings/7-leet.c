#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: function parameter
 * Return: n
 */
char *leet(char *n)
{
	int i, l;
	char string1[] = "aAeEoOtTlL";
	char string2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (l = 0; l < 10; l++)
			if (n[i] == string1[l])
			{
				n[i] = string2[l];
			}
	}
	return (n);
}
