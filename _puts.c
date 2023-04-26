#include <stddef.h>
#include "main.h"

/**
  * _puts - the function name
  * @str: parameter of type char *.
  * Return: int .
 */

int _puts(char *str)
{
	int i , j = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
		j += _putchar(str[i]);
	return (j);
}
