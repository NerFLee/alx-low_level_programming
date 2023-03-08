#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * * Auth0r: Severin
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
    if (*s)
    {
        _print_rev_recursion(s + 1);
        _putchar(*s);
    }
}
