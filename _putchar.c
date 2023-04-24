#include <unistd.h>
#include "main.h"

/**
  * _putchar - the function name
  * @c: parameter of type char .
  * Return: int .
 */
int _putchar(char c)
{
	static char buf[BUFF_SIZE];
	static int i;

	if (c == -1 || i >= BUFF_SIZE)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
