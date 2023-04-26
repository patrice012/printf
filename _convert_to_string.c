#include "main.h"

/**
 * _uitoa - Converts an unsigned integer to a string.
 * @num: The unsigned integer to be converted.
 * @base: The base of the number system to use for conversion.
 * @is_uppercase: A flag indicating whether to use uppercase letters for
 *                hex digits (ignored if base != 16).
 *
 * Return: A pointer to the resulting string, or NULL upon failure.
 *         The returned string should be freed when no longer needed.
 */
char *_uitoa(unsigned int num, unsigned int base, int is_uppercase)
{
	static char buffer[32] = {0};
	const char *digits = (is_uppercase ? "0123456789ABCDEF" : "0123456789abcdef");
	char *p = buffer;
	char *begin, *end;
	char temp;

	if (base > 16)
		return (NULL);

	do {
		*p++ = digits[num % base];
		num /= base;
	} while (num);

	*p = '\0';
	/* reverse the string */
	for (begin = buffer, end = p - 1; begin < end; begin++, end--)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;
	}

	return (buffer);
}

