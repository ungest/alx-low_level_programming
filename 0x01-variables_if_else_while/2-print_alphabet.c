#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the alphabets in lower case
 *
 * Return: 0
 */
int main(void)
{
	char alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
{
	putchar(alp);
}
	putchar('\n');
	return (0);
}

