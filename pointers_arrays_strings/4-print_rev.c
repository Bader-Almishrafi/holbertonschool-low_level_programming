#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int index;

	while (s[len] != '\0')
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
