#include "main.h"
/**
 * _abs - absolute value/positive
 * @v: parmeter
 * Return: 0
 */
int _abs(int v)
{
	if (v < 0)
		return (-v);
	else if (v >= 0)
	{
		return (v);
	}
	return (0);
}
