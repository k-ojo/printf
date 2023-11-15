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

	for (; i >= 0; i--)
	{
		int j;
		rem = *(ptr + i);
		for (j = 10; j < 16; j++)
		{
			if (rem == j)
			{
				rem = 17 + (j - 10);
				break;
			}
		}

		_putchar(rem  + '0');
	}
	free(ptr);
	return (size);
}
