#include "main.h"


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * put_special- prints special character
 * @c: input character
 *
 * Return: Nothing
 */
void put_special(char c)
{
	switch (c)
	{
		case 'n':
			_putchar('\n');
			break;
		case 't':
			_putchar('\t');
			break;
		case '\\':
			_putchar('\\');
			break;
		case '\'':
			_putchar('\'');
			break;
		case '%':
			_putchar('%');
			break;
		case '\"':
			_putchar('\"');
			break;
		case 'r':
			_putchar('\r');
			break;
		case 'v':
			_putchar('\v');
			break;
		case 'b':
			_putchar('\b');
			break;
		case 'a':
			_putchar('\b');
			break;
		case 'f':
			_putchar('\f');
			break;
	}
}

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
