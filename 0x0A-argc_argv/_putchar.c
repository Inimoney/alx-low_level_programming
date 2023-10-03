#include <stdio.h>
#include "main.h"

/**
 * _putchar - A function that writes the character c to stdout
 * @c:Ther character to print
 * Return: On success 1 and 0 if false
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

