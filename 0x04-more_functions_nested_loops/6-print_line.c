#include "main.h"
/**
 * print_line - It takes one argument
 * @n: length of line
 *
 * Return: returns void
 */
void print_line(int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
