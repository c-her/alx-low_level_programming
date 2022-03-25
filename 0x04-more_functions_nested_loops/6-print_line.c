#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * dependent on int n.
 * @n: The number of '_' characters to use
 * Return: Void.
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
