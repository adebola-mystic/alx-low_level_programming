#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: print the numbers 1 - 100
 * print Fizz for multiple of 3, print Buzz for multiples of 5
 * and print FizzBuzz for multiples of both
 * Return: 0 success
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buz");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
