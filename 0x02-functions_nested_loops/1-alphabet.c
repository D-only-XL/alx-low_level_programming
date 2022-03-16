#include <stdio.h>
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
voidprint_alphabet(void)
{
	int alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha) ; alpha++;
	}
	_putchar('\n');
}
