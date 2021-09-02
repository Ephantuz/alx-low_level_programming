#include "main.h"
#include <stdio.h>

/**
 * _isdigit - It has one parameter
 * @c: is the number that we check if it is a digit
 * Return: 1 if c is a digit else return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
