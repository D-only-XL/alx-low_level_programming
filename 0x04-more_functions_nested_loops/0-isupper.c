#include "main.h"
#include <stdio.h>

/**
 * _isupper - returns 1 if c is Upper case.
 *@c: uppercase letter.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c<= 'Z')
{
return (1);
}
else
{
return (0);
}
}
