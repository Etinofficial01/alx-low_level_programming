#include "main.h"

/**
 * string_toupper - changes lowercase of string to uppercase
 * @s: an input string
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
