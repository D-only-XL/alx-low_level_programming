#include main.h

/**
*_strncat - concentrates two strings
*@dest: A pointer of a character that will be changed
*@src: A pointer that a character that will also be changed
*@n: value
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dear[i] = '\0';
return (dest);
}
