#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase followed by a new line
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		_putchar (low);
	_putchar ('\n');
}
