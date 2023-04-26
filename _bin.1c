#include "main.h"
#include <stdlib.h>

/**
  * _binary - convert and print the binary format
  * @x: number to convert
  * Return: number of bytes written
 */


char *_binary(unsigned int x)
{
	char *binary = malloc(sizeof(char) * 33);
	int i;

	for (i = 31; i >= 0; i--)
	{
		int bit = (x >> i) & 1;

		binary[31 - i] = bit ? '1' : '0';
	}

	binary[32] = '\0';
	return (binary);
}


/**
 * print_binary - print binary format of integer
 * @arg: positional argument
 * Return: the number of bytes printed
 */


int print_binary(va_list arg)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	n = va_arg(arg, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	i = 1;
	while (i < 32)
	{
		m /= 2;
		a[i] = (n / m) % 2;
		i++;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			count++;
		}
	}
	return (count);
}
