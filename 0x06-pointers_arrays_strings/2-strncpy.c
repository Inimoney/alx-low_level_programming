#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: dtesination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	for (z = 0 ; z < n && src[z] != '\0' ; z++)
		dest[z] = src[z];
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}
	return (dest);
}
