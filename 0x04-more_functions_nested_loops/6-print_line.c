#include "holberton.h"

/**
 * print_line - prints an underscore n times
 * @n: number of times printed
 *
 * Return: void
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
