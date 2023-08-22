#include "main.h"

/**
 * swap_int - swap values of a & b
 * @a: function parameter
 * @b: function parameter
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
