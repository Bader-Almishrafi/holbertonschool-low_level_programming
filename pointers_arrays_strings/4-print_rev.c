#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @str: The string to be printed.
 */
void print_rev(char *str)
{
    int len = 0, index;

    // Start index from 0
    for (index = 0; str[index] != '\0'; index++)
        len++;

    // Print characters in reverse
    for (index = len - 1; index >= 0; index--)
        _putchar(str[index]);

    _putchar('\n');
}
