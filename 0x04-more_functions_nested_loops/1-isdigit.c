#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: An input character
 * Return: 1 if c is a digit or 0 otherwise
 */
int  _isdigit(int c)
{
	int isdigit = 0;
	char i = '0';

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
