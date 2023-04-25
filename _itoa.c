#include "main.h"

/**
  * _itoa - convert integer to char
  * @num: int arg
  * @str: pointer to  char
  * Return:  pointer to char
  */


char *_itoa(int num, char *str)
{
	int i = 0; /*sign = 0;*/

	if (num < 0)
	{
		/*sign = 1;*/
		num = -num;
	}
	do {
		str[i++] = num % 10 + '0';
		num /= 10;
	} while (num);
	str[i] = '\0';
	return (str);
}
