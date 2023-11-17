#include "main.h"

/**
 * print_HEX- prints hex number in capital
 *
 * @ap: input ap
 *
 * Return: number of printed char
 */
int print_HEX(va_list ap)
{
	unsigned long int q, n;
	void *ptr1 = va_arg(ap, void*);
	int size = 0, i = 0;
	unsigned char *ptr;
	unsigned char rem;

	n = (unsigned long int)ptr1;
	q = n;
	while (q / 16 > 0)
	{
		size++;
		q /= 16;
	}

	ptr = malloc(sizeof(unsigned char) * (size));
	for (i = 0; i <= size; i++)
	{
		rem = n % 16;
		*(ptr + i) = rem;
		n /= 16;
	}
	i--;

		print_out(ptr, 17, i);
	free(ptr);
	return (size + 1);
}
