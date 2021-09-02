#include "main.h"

/**
 * print_diagonal - print diagonal with "\"
 * @n: Times to print
 */
void print_diagonal(int n)
{
int a, b;

for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
