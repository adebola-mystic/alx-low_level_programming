#include "main.h"

/**
 * print_line - print straight line on on the terminal
 * @n: Number of times
 * Return: 0 success
 */

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
