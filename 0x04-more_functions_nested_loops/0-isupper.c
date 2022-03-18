#include "main.h"

/**
*_isupper - checks for uppercase character
*
*@c: uppercase character
*
*Return: returns 1 if c is uppercase, returns 0 otherwise
*/

int _isupper(int c)
{
int up;

for (up = 65; up <= 90; up++)
{
if (up == c)
{
return (1);
}
}
return (0);
}
