#include "main.h"

/**
 * _puts - prints string
 * @str: input string
 * Return: Void
 */
voi _puts(char *str)
{
	while (str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

