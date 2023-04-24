#include "main.h"



/**
 * _itoa - converts an integer to a string
 * @num: The integer to convert
 * @str: The buffer to store the string
 *
 * Return: A pointer to the string buffer.
 */


char *_itoa(int num, char *str)
{
	int i = 0, sign = 0;

	if (num < 0)
	{
		sign = 1;
		num = -num;
	}

	do {
		str[i++] = num % 10 + '0';
		num /= 10;
	} while (num);

	if (sign)
		str[i++] = '-';

	str[i] = '\0';

	return (str);
}
