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
	char character;

	for (character = 0; character < 128; character++)
	{
		putchar(character);
	}

	return (0);
}
