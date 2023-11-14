#include "main.h"
#include <stdarg.h>


/**
 * print_format- prints formatted output
 * @c: input char
 * @ap: variadic list
 * @i: iterator
 *
 * Return: number printed output
 */
int print_format(char c, va_list ap, unsigned int *i)
{
	char *str;
	int count = 0;

	switch (c)
	{
		case 'i':
			count += print_int((va_arg(ap, int)));
			*i += 1;
			break;
		case 'd':
			count += print_int((va_arg(ap, int)));
			*i += 1;
			break;
		case 'c':
			_putchar((char)(va_arg(ap, int)));
			*i += 1;
			count++;
			break;
		case 's':
			str = va_arg(ap, char *);
			count += print_string(str);
			*i += 1;
			break;
		case '%':
			_putchar('%');
			count++;
			*i += 1;
			break;
		default:
			_putchar('%');
			count++;
			i += 1;
	}
	return (count);
}

/**
 * _printf- custom printf function
 *
 * @format: Input string
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i = 0, count = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += print_format((format[i + 1]), ap, &i);
		}

		else if (format[i] == '\\')
		{
			put_special(format[i + 1]);
			count++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
