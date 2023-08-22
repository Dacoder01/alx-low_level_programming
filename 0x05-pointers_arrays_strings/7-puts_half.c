#include "main.h"

/**
 * puts_half - print half of the string;
 * @str: function parameter
 * Return: void
 */
void puts_half(char *str)
{
	int i, n;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	n = (length - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
