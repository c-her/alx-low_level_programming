#include "main.h"
#include <stdio.h>

/**
 * prime_factor - prints the largest prime factor of the number 612852475143
 *
 * Return: Success always
 */

int main(void)
{
	long int x = 612852475143;
	long int py;

	for (py = 2; py < x; py++)
	{
		if (x % py == 0)
		{
			x = x / py;
		}
	}
	printf("%d\n", py);
	return (0);
}
