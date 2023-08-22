#include "main.h"

/**
 * print_array - print the n elements of array
 * @a: function parameter
 * @n: function parameter
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
