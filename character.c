#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * character - Entry point
 *
 * Return: Always 0
 */
int character(void)
{
	int character;

	for (character = 0; character < 128; character++)
	{
		putchar(character);
	}

	return (0);
}
