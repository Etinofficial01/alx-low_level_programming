#include "main.h"

/**
 * _isalpha - prints lowercase or uppercase
 * @c: an input character
 *
 * Return: 1 if c is a letter, lowercase,uppercase or 0 otherwise
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
