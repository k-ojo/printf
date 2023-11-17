#include "main.h"

/**
 * print_out- prints to out
 *
 * @ptr: input array
 * @n: offset
 * @i: size
 * Return: count
 */
int print_out(unsigned char *ptr, const int n, int i)
{
	unsigned int j, rem = 0;

	for (; i >= 0; i--)
	{

		rem = *(ptr + i);
		for (j = 10; j < 16; j++)
		{
			if (rem == j)
			{
				rem = n + (j - 10);
				break;
			}
		}

		_putchar(rem  + '0');
	}
	return (0);
}


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

	while (q / 16 > 0)
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
	i--;

	print_out(ptr, 49, i);
	free(ptr);
	return (size);
}
