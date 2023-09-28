#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the printed character
 * Return: 1 if true and 0 if false
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
