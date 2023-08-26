#include "main.h"

/**
 * reverse_array - reverse the array
 * @a: function parameter
 * @n: function parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, r;

	for (i = 0; i < n--; i++)
	{
		r = a[i];
		a[i] = a[n];
		a[n] = r;
	}
}
