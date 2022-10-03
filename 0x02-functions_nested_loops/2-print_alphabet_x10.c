#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times using _putchar function followed by a new line
 */
void print_alphabet_x10(void)
{
	char j;
	int i;

	i = 0;

	while (i < 10;)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar (j);
			j++;
		}
		_putchar ('\n');
		i++;
	}
}
