#ifndef MAIN_H
#define MAIN_H

/* Listes de Librairies */

#include <stdarg.h>
#include <stdlib.h>

/* Listes des Prototypes */

int _putchar(char c);
int _printf(const char *format, ...);
int power(int a, int b);
int length(int number);

/* MANDATORY_FUNCTIONS */
int formatPercent(va_list *args);
int formatString(va_list *args);
int formatChar(va_list *args);
int formatDecimal(va_list *args);
int formatInteger(va_list *args);
/* EXTRAS_FUNCTIONS */
int formatUnsignedDecimal(va_list *args);
int formatOctal(va_list *args);
int formatUnsignedHexa(va_list *args);
int formatAddress(va_list *args);
int formatUnknown(va_list *args);

/**
 * struct whichFormat - Structure defining a format specifier and
 * its handler function
 * @types: Type specifier character (e.g., 'c', 's', '%', etc.)
 * @formatFunction: Pointer to the function responsible for formatting
 * the corresponding specifier
 */

typedef struct whichFormat
{
	char types;
	int (*formatFunction)(va_list *);
} FormatSpecifier;

#endif
