#include "main.h"
#include <stdarg.h>


/**
 * print_others- print other formatters
 *
 * @ap:input argument
 * @c: input character
 * @j: iterator
 * Return: count
 */
int print_others(char c, va_list ap, unsigned int *j)
{
	int i = 0, count = 0;

	func_ptr arr[] = {
		{"%x", print_hex}, {"%b", print_bin},
		{"%o", print_oct}, {"%u", print_unsigned},
		{"%X", print_HEX},
		{0, 0}
	};

	while (arr[i].id && arr[i].func)
	{
		if (arr[i].id[1] == c)
		{
			count += arr[i].func(ap);
			*j += 1;
			break;
		}
		i++;
	}
	if (count == 0)
	{
		_putchar('%');
		count++;
	}
	return (count);
}
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
			count += print_dec((va_arg(ap, int)));
			*i += 1;
			break;
		case 'c':
			_putchar((char)(va_arg(ap, int)));
			*i += 1;
			count++;
			break;
		case 's':
			str = va_arg(ap, char *);
			if (!str)
				str = "(null)";
			count += print_string(str);
			*i += 1;
			break;
		case '%':
			_putchar('%');
			count++;
			*i += 1;
			break;
		default:
			count += print_others(c, ap, i);
			break;
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
