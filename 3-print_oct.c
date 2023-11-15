#include "main.h"

/**
 * print_oct- prints octal number
 *
 * @ap: input ap
 *
 * Return: number of printed char
 */
int print_oct(va_list ap)
{
	unsigned int q, n = va_arg(ap, unsigned int);
	int size = 0, i = 0;
	unsigned char *ptr;
	unsigned char rem;

	q = n;

	while (q > 0)
	{
		size++;
		q /= 8;
	}
	do {
		ptr = malloc(sizeof(unsigned char) * size);
	} while (!ptr);
	while (n > 0)
	{
		rem = n % 8;
		*(ptr + i) = rem;
		n /= 8;
		i++;
	}
	i--;

	for (; i >= 0; i--)
	{
		_putchar(*(ptr + i) + '0');
	}
	free(ptr);
	return (size);
}