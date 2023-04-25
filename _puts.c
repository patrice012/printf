#include <stddef.h>
#include "main.h"

/**
  * _puts - the function name
  * @str: parameter of type char *.
  * Return: int .
 */
int _puts(char *str)
{
	int i;

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);
	return (i);
}
