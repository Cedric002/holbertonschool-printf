#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char string[] = "Hello, World";
	int c;

	for (c = 0; string[c] != '\0'; c++)
	{
		putchar(string[c]);
	}

	return (0);
}
