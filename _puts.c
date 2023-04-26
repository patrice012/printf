#include <stddef.h>
#include "main.h"

/**
  * _puts - the function name
  * @str: parameter of type char *.
  * Return: int .
 */

int _puts(char *str)
{
	int i, j = 0;

	for (i = 0; str[i]; i++)
		j += _putchar(str[i]);
	return (j);
}
