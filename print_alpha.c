#include "main.h"

/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_char(va_list l)
{
	unsigned int i;

	i = _putchar(va_arg(l, int));
	return (i);
}



/**
 * print_string - loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_string(va_list l)
{
	char *s = va_arg(l, char *);

	if (!s)
		s = "(null)";
	return (_puts(s));
}
