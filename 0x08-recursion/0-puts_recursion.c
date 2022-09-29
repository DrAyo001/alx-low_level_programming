#include "main.h"

/**
 * main - function that prints a string,
 * followed by a new line.
 * @s: string to be printed.
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
        if (*s == '\n')
        {
            _putchar('\n');
        }
        else
        {
            _putchar(s[0]);
            _puts_recursion(s + 1);
        }
}