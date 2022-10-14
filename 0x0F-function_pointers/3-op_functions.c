#include "3-calc.h"

/**
 * op_add - calcluates the sum of the two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sume of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the diff of two integers
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - cal the prod of two int
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: prod of a && b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - cal the div of two int
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: div of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - cal the reminder of the div of two int
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: reminder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
