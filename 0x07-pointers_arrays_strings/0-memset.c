#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: address of memory to be filled
 * @b: the ecpected value
 * @n: amount of bytes to be changed
 * Return: changed array followed by new value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

