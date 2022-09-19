#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: Nothing
 */

void rev_string(char *s)
{
	char tmp;
	int i = 0, len = 0;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		tmp = s[i];
		s[i++] = s[len];
		s[len] = tmp;
	}
}
