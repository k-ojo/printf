#include "main.h"
#include <stdlib.h>

/**
 * print_bin - prints binary number
 * @ap: input ap
 * Return: number of printed characters
 */
int print_bin(va_list ap)
{
	unsigned int q, n = va_arg(ap, unsigned int);
	int size = 0, i = 0;
	unsigned char *ptr;
	unsigned char rem;

	q = n;

	while (q / 16 > 0)
	{
		size++;
		q /= 2;
	}
	do {
		ptr = malloc(sizeof(unsigned char) * size);
	} while (!ptr);
	for (i = 0; i <= size; i++)
	{
		rem = n % 2;
		*(ptr + i) = rem;
	}
	i--;

	for (; i >= 0; i--)
	{
		_putchar(*(ptr + i) + '0');
	}
	free(ptr);
	return (size + 1);
}
