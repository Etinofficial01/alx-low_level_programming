#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times using _putchar function followed by a new line
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar (j);
		_putchar ('\n');
	}
}
