#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase using putchar
 *
 * return: 0 Always
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
