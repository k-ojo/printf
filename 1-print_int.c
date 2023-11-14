#include "main.h"

/**
 * _pow- computes powers of numbers
 *
 * @base: base
 * @index: index
 *
 * Return: base to the power index
 */
int _pow(int base, int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
	{
		return (1);
	}
	return (base * _pow(base, index - 1));
}

/**
 * print_int- prints integer values (both +ve and -ve)
 *
 * @n: input integer
 *
 * Return: Nothing
 */
int print_int(int n)
{
	unsigned int i = 0;
	int dummy, base;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	dummy = n;

	while (dummy / 10 != 0)
	{
		dummy = dummy / 10;
		i++;
	}
	base = _pow(10, i);

	while (base > 1)
	{
		_putchar((n / base) + '0');
		n = n % base;
		base /= 10;
	}
	_putchar(n + '0');
	return (i + 1);
}
