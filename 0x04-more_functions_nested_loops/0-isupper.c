#include "main.h"
#include <stdio.h>

/**
 * _isupper - returns 1 if c is Upper case.
 *@c: uppercase letter.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
