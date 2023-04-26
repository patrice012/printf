#include "main.h"


/**
  * _binary - convert and print the binary format
  * @num: number to convert
  * Return: number of bytes written
 */


int _binary(unsigned int num)
{
	int n = 0;

	if (num > 1)
		_binary(num >> 1);

	n += _putchar((num % 2 != 0) ? '1' : '0');

	return (n);
}


/**
 * print_binary - print binary format of integer
 * @arg: positional argument
 * Return: the number of bytes printed
 */


int print_binary(va_list arg)
{
	unsigned int value = va_arg(arg, unsigned int);

	if (!value)
	{
		return (-1);
	}

	return (_binary(value));
}
