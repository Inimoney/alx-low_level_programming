#include "main.h"

/**
 * _strncat - A  function that concatenates two strings.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * @n: number of bytes to be concatenated.
 * Return: pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_of_string = strlen(dest);
	int z;

	for (z = 0; z < n && *src != '\0' ; z++)
	{
		dest[length_of_string + z] = *src;
		src++;
	}
	dest[length_of_string + z] = '\0';
	return (dest);
}

