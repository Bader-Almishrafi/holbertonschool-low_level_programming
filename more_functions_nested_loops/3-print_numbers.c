#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf((num % 10) + '0');

	printf('\n');
}
