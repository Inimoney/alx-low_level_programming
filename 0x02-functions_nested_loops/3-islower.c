#include "main.h"

/**
 * _islower - Lowercase character checks
 * @c: Character to be checked
 * Return: if charcater is lowercase, otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
