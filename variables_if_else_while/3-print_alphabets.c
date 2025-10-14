#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alp[i] - 32); /* convert to uppercase */
	}
	putchar('\n');
	return (0);
}

