#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: function parameter
 * Return: 1 if success 0 if fail
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
