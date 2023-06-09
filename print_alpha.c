#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * print_char - print a character
 * @arg: argument list
 * Return: length of the character
 */
int print_char(va_list arg)
{
	char c;
	int count;

	c = va_arg(arg, int);
	count = _putchar(c);
	va_end(arg);
	return (count);
}


/**
 * print_str - print a string
 * @arg: argument list
 * Return: length of the string
 */

int print_str(va_list arg)
{
	char *str, *str2;
	int count = 0; /*i ,value = 0;*/

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		va_list arg2;

		va_copy(arg2, arg);
		str2 = va_arg(arg2, char *);
		str2 = "(null)";

		count = _puts(str2);

		va_end(arg2);
		return (count);
	}

	count = _puts(str);

	return (count);
}


/**
 * print_cent - print percentage
 * @arg: argument list
 * Return: length of the argument
 */
int print_cent(va_list arg __attribute__((unused)))
{
	int count = 0;
	char c;

	c = '%';
	count += _putchar(c);
	return (count);
}

