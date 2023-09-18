#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: swaps and stores address of b
 * @b: swaps and stores the address of a
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
