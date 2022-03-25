#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints numbers from 1 to 100
 * prints Fizz for multiples of 3
 * prints Buzz for multiple of 5
 * prints FizzBuzz for multiples of both 3 and 5.
 *
 * Return: Void.
 */
int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("%s", "Fizzbuzz");
		}
		else if (x % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if(x % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", x);
		}

		if (x != 100)
		{
			printf(" ");
		}
		x++;
	}
	printf("\n");
	return (0);
}
