#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints the number of arguments followed by a new line
 * @argc: argc parameter
 * @argv: an array of command listed
 * Return: 0 for Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
