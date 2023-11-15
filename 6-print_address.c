#include "main.h"

/**
 * print_address- prints address
 *
 * @ap: input argument
 * Return: count
 */
int print_address(va_list ap)
{
	int *ptr = va_arg(ap, void *);
	return (_printf("0x%x", ptr));
}
