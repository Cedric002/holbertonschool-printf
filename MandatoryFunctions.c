#include "main.h"

/**
 * formatChar - Formats and prints a single character
 * @args: Arguments list containing the character to be formatted
 *
 * Return: Number of characters printed (always 1)
 */

int formatChar(va_list *args)
{
	_putchar(va_arg(*args, int));
	return (1);
}

/**
 * formatString - Formats and prints a string of characters
 * @args: Arguments list containing the string to be formatted
 *
 * Return: Number of characters printed
 */

int formatString(va_list *args)
{
	const char *str;
	int i = 0;

	str = va_arg(*args, const char *);
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str++);
		i++;
	}
	return (i);
}

/**
 * formatPercent - Formats and prints a percent symbol
 * @args: Arguments list (unused)
 *
 * Return: Always returns 1 (the number of characters printed)
 */

int formatPercent(va_list *args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
 * formatDecimal - Formats and prints a decimal integer
 * @args: Arguments list containing the integer to be formatted
 *
 * Return: Number of characters printed
 */

int formatDecimal(va_list *args)
{
	unsigned int abs;
	int number = va_arg(*args, int);
	int count = 0;
	int length_num;


	if (number == 0)
	{
		count = _putchar('0');
	}
	else if (number < 0)
	{
		count = _putchar('-');
		abs = (unsigned int)(-number);
	}
	else
	{
		abs = (unsigned int)number;
	}

	length_num = length(abs);

	while (length_num > 0)
	{
		int digit;

		digit = abs / power(10, length_num - 1) % 10;
		count += _putchar('0' + digit);
		length_num--;
	}

	return (count);
}
/**
 * formatInteger - Formats and prints an integer (calls formatDecimal)
 * @args: Arguments list containing the integer to be formatted
 *
 * Return: Number of characters printed
 */

int formatInteger(va_list *args)
{
	return (formatDecimal(args));
}
