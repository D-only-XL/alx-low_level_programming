#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Description - main returns 0
 * Return; Always 0 (Success)
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
