#include <stddef.h>
#include "main.h"


/**
 * _puts - writes a string to stdout
 * @str: The string to print
 *
 * Return: The number of characters printed.
 */


int _puts(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
