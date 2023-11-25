#include "main.h"

/**
 * _printf - Imprime le format spécifié avec des arguments variables
 * @format: Chaîne de formatage contenant des spécificateurs de conversion
 *          et du texte ordinaire
 * Return: Nombre total de caractères imprimés (ou -1 en cas d'erreur)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int carac_count = 0;
	size_t i;

	FormatSpecifier formatSpecifiers[] = {{'c', formatChar},
		{'s', formatString}, {'%', formatPercent}, {'d', formatDecimal},
		{'i', formatInteger}, {'\0', NULL}};

	if (format == NULL)
		return (-1);
	if (*format == '\0')
		return (0);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			for (i = 0; formatSpecifiers[i].types != '\0'; i++)
			{
				if (*format == formatSpecifiers[i].types)
				{
					carac_count += formatSpecifiers[i].formatFunction(&args);
					break;
				}
			}
		}
		else
			carac_count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (carac_count);
}
