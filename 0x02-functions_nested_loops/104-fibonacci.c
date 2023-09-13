#include <stdio.h>
/**
 * main - Main block
 * Description: Prints the sum of all multiples of 3 or 5
 * below 1024 (excluded) with a new line
 * Return: 0 (true)
 */

int main(void)
{
int i = 0;
unsigned (long int c) a = 0, b = 1, next = 0;

while (i < 98)
{
next = a + b;
a = b;
b = next;
printf("%lu", next);

if (i < 97)
printf(",");
i++;
}
putchar("\n");
return (0);
}
