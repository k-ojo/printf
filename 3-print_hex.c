#include "main.h"


/**
 * print_hex- prints binary number
 *
 * @ap: input ap
 *
 * Return: number of printed char
 */
int print_hex(va_list ap)
{
	unsigned long q, n;
	void *ptr1 = va_arg(ap, void*);
	int size = 0, i = 0;
	unsigned char *ptr;
	unsigned char rem;

	n = (unsigned long int)ptr1;
	q = n;

	while (q / 16 != 0)
	{
		size++;
		q /= 16;
	}
	size++;

	ptr = malloc(sizeof(unsigned char) * (size));
	for (i = 0; i < size; i++)
	{
		rem = n % 16;
		n /= 16;
		*(ptr + i) = rem;
	}
	for (i = size - 1; i >= 0; i--)
	{
		if (*(ptr + i) > 9)
			*(ptr + i) += 39;
		_putchar(*(ptr + i) + '0');
	}
	free(ptr);
	return (size);
}
