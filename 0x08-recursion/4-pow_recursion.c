#include "main.h"

/**
 * Description: int _pow_recursion(int x, int y)
 * prints the value of x raised to the power of y.
 * @x: number to be used as base
 * @y: exponent to be used
 *
 * Return: x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
