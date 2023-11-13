#include "main.h"

/**
 * print_string- prints string of characters
 *
 * @str:input str
 *
 * Return: number for characters printed
 */
int print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
