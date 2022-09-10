#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase and then in uppercase
 *
 * Result: 0 Always
 */
int main(void)
{
	char alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		putchar(alp);
	}
	for (alp = 'A' ; alp <= "Z" ; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
