#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string - Entry point
 *
 * Return: Always 0
 */
int string(void)
{
	char string[] = "Hello, World";
	int character;

	for (character = 0; string[character] != '\0'; character++)
	{
		putchar(string[character]);
	}

	return (0);
}
