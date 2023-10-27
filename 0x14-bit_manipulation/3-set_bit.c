#include "main.h"

/**
 * set_bit - A function that sets a bit to 1 at a given index.
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1, starting from 0
 * Return: 1 if it's a success,or -1 if failed.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
