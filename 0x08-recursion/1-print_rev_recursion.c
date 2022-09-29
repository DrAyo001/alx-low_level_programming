#include "main.h"

/**
 * main - void _print_rev_recursion(char *s)
 * function that prints a string in reverse.
 * @s: string to be printed 
 * 
 * Return: void
 */ 

void _print_reve_recursion(char *s)
{
        if (*s != '\0')
        {
                _print_rev_recursion(s + 1);
                _putchar(*s);
        }
}