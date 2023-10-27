#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: the searched number
 * @index: index of the bit, starting from 0 of the intended bit
 * Return: value of the bit at index, or -1 if failed.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
