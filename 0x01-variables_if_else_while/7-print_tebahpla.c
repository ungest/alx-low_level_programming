#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 Always
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp <= 'a'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
