#include <stdarg.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @args: va_list containing the string to be printed
 * Return: The length of the string
 */
int print_rev(va_list args)
{

	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}

