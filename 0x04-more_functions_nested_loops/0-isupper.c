#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if parameter c represents an uppercase letter.
 * @c: Int representing s chsracter
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
