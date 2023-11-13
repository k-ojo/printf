#include "main.h"
#include <stdarg.h>

/**
 * _printf- custom printf function
 *
 * @format: Input string
 *
 * Return: number of printed characters
 */
int _printf(char *format, ...)
{
	va_list ap;
	unsigned int i = 0, count = 0;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'i':
					count += print_int((int)(va_arg(ap, int)));
					i++;
					break;
				case 'd':
					count += print_int((int)(va_arg(ap, int)));
					i++;
					break;
				case 'c':
					_putchar((char)(va_arg(ap, int)));
					i++;
					count++;
					break;
				case 's':
					count += print_string(va_arg(ap, char *));
					i++;
					break;
			}
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
