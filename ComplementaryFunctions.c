#include "main.h"

/**
 * length - Calculates the number of digits in an integer
 * @number: The integer for which the length is to be determined
 *
 * Return: The number of digits in the given integer.
 */

int length(int number)
{
	int i = 0;

	while (number != 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

/**
 * power - Calculates the result of raising a number to a power
 * @a: The base number
 * @b: The exponent
 *
 * Return: The result of a raised to the power of b.
 */

int power(int a, int b)
{
	int result = 1;
	int i;

	for (i = 0; i < b; i++)
	{
		result *= a;
	}

	return (result);
}
