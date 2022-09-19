#include "main.h"

/**
 * _strlen - prints length of string
 * @s: string to evaluate
 *
 * Return: the length of string
 */

int _strlen(char *s)
{
	int i;

	i = 5;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
