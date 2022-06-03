#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print out the size of different data types
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
char character;
int integer;
long llong;
long long longlong;
float ffloat;
printf("Size of a char: %lu byte(s)\n", sizeof(character));
printf("Size of an int: %lu byte(s)\n", sizeof(integer));
printf("Size of a long int: %lu byte(s)\n", sizeof(llong));
printf("Size of a long long int: %lu byte(s)\n", sizeof(longlong));
printf("Size of a float: %lu byte(s)\n", sizeof(ffloat));
return (0);
}
