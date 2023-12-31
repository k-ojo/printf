#include "main.h"

/**
 * print_address- prints address
 *
 * @ap: input argument
 * Return: count
 */
int print_address(va_list ap)
{
	unsigned long int addr;
	void *ptr = va_arg(ap, void *);

	if (ptr == 0)
	{
		return (_printf("(null)"));
	}
	addr = (unsigned long int)ptr;

	_putchar('0');
	_putchar('x');
	return (2 + print_hex1(addr));
}
