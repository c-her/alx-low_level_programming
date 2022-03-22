#include "main.h"

/**
 * main: Entry point
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}
