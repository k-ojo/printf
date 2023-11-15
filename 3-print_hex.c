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
	unsigned char j, rem = 0;

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
	unsigned int q, n = va_arg(ap, unsigned int);
	int size = 0, i = 0;
	unsigned char *ptr;
	unsigned char rem;

	q = n;

	while (q > 0)
	{
		size++;
		q /= 16;
	}
	do {
		ptr = malloc(sizeof(unsigned char) * size);
	} while (!ptr);
	while (n > 0)
	{
		rem = n % 16;
		*(ptr + i) = rem;
		n /= 16;
		i++;
	}
	i--;

	print_out(ptr, 49, i);
	free(ptr);
	return (size);
}
