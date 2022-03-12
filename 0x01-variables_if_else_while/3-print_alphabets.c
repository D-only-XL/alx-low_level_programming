#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet in lower and uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha;
	char bet;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	}
	for (bet = 'A' ; bet <= 'Z' ; bet++)
	{
		putchar(bet);
	}
	putchar('\n');
	return (0);
}
