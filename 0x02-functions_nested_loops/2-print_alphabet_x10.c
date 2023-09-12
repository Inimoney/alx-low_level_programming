#include "main.h"

/**
 * print_alphabet_x10 - Prints 10x the alphabet with a new line
 * Return: 0 (true)
 */

void print_alphabet_x10(void)
{
char num, letter;

for (num = 0; num <= 9; num++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
