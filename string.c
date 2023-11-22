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
	int character;

	for (character = 0; string[character] != '\0'; character++)
	{
		putchar(string[character]);
	}

	return (0);
}
