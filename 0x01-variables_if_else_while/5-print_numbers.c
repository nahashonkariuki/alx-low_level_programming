#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digits starting from 0 in base 10
 *
 *  Return: Always 0 (Success)
 */

int main(void)

{
int digit;
for (digit = 0; digit < 10; digit++)
	printf("%i", digit);
	putchar('\n');
return (0);
}
