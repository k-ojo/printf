#include "main.h"

/**
 * print_address- prints address
 *
 * @ap: input argument
 * Return: count
 */
int print_address(va_list ap)
{
	unsigned long long int addr;
	void *ptr = va_arg(ap, void *);

	if (ptr == 0)
	{
		return (_printf("(null)"));
	}
	addr = (unsigned long long int)ptr;

	return (_printf("0x%x", addr));
}
