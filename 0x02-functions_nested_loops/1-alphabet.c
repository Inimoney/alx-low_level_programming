#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Alphabets in lowercase with a new line
 * Return: 0 (true)
 */

void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
