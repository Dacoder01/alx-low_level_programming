#include "main.h"

/**
 * rev_string - reverse the string
 * @s: function parameter
 * Return:void
 */

void rev_string(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = 0; i < length / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = j;
	}
}
