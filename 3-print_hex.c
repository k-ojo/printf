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
	unsigned int q, n = va_arg(ap, unsigned int);
	int size = 0, i = 0;
	unsigned char *ptr;
	unsigned char rem;

	q = n;
	rem = q % 16;

	while (q / 16 > 0)
	{
		size++;
		q /= 16;
	}
	do {
		ptr = malloc(sizeof(unsigned char) * (size + 1));
	} while (!ptr);
	for (i = 0; i <= size; i++)
	{
		rem = n % 16;
		n /= 16;
		*(ptr + i) = rem;
	}
	i--;

	print_out(ptr, 49, i);
	free(ptr);
	return (size + 1);
}
