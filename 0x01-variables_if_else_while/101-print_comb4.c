#include <stdio.h>

/**
 * main - Print combinations of three digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
int hundreds;
int tens;
int ones;

for (hundreds = 0; hundreds <= 9; hundreds++)
	{
	for (tens = 0; tens <= 9; tens++)
		{
		putchar(hundreds + '0');
		if (hundreds < 8)
			{
			putchar(',');
			putchar(' ');
			}
		for (ones = tens + 1; ones <= 9; ones++)
			{
			putchar(tens + '0');
			putchar(ones + '0');

			if (tens < 8)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
}
