#include <stdarg.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @args: A va_list containing the string to be printed
 *
 * Return: The length of the string
 */
int print_rev(va_list args)
{
	char *input_string = va_arg(args, char *);
	int str_length, index = 0;

	if (input_string == NULL)
		input_string = "(null)";
	str_length = 0;
	while (input_string[str_length] != '\0')
		str_length++;
	for (index = str_length - 1; index >= 0; index--)
		_putchar(input_string[index]);
	return (str_length);
}

