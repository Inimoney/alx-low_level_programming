#include "main.h"

/**
 * print_array - A function that prints n elements oa an arrayof integers
 * @a: This is the input array
 * @n: This is the length of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

