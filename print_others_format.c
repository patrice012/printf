#include "main.h"

/**
  * print_decimal - print decimal format
  * @arg: argument list
  * Return: number of bytes written
  */


int print_decimal(va_list arg)
{
	unsigned int value = va_arg(arg, unsigned int);
	int base = 10, is_uppercase = 0, count = 0;
	char *ptr = _uitoa(value, base, is_uppercase);

	count += _puts(ptr);
	return (count);
}



/**
  * print_octal - print octal format
  * @arg: argument list
  * Return: number of bytes written
  */


int print_octal(va_list arg)
{
	unsigned int value = va_arg(arg, unsigned int);
	int base = 8, is_uppercase = 0, count = 0;
	char *ptr = _uitoa(value, base, is_uppercase);

	count += _puts(ptr);
	return (count);
}



/**
  * print_lower_hexadecimal - print hexadecimal format
  * @arg: argument list
  * Return: number of bytes written
  */


int print_lower_hexadecimal(va_list arg)
{
	unsigned int value = va_arg(arg, unsigned int);
	int base = 16, is_uppercase = 0, count = 0;
	char *ptr = _uitoa(value, base, is_uppercase);

	count += _puts(ptr);
	return (count);
}


/**
  * print_upper_hexadecimal - print hexadecimal format for uppercase value
  * @arg: argument list
  * Return: number of bytes written
  */


int print_upper_hexadecimal(va_list arg)
{
	unsigned int value = va_arg(arg, unsigned int);
	int base = 16, is_uppercase = 1, count = 0;
	char *ptr = _uitoa(value, base, is_uppercase);

	count += _puts(ptr);
	return (count);
}

