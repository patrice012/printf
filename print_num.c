#include <stdarg.h>
#include "main.h"



/**
* print_dec - print decimal
* @args: argument list
* Return: length of argument
*/
int print_dec(va_list args)
{
	int i = 0;
	int count = 0;
	long int numb;
	int my_arr[10];
	char x[1];

	/*Fetch integer from variadic parameters*/
	numb = va_arg(args, int);
	if (numb < 0)
	{
		numb = -((long int)(numb));
		count = _putchar('-');
	}
	if (numb > 0)
	{
		/*Break the numbers apart and assign them to array*/
		while (numb != 0)
		{
			my_arr[i] = (numb % 10);
			numb = numb / 10;
			if (numb == 0)
			{
				break;
			}
			i++;
		}

		/*Write the contents of the array to stdout*/
		for ((void)i; i >= 0; i--)
		{
			x[0] = ('0' + my_arr[i]);
			count += _putchar(x[0]);
		}
		return (count);
	}
	if (numb == 0)
	{
		count = _putchar(numb + '0');
	}
	return (count);
}

/**
* print_int - print integer
* @arg: the current argument
* Return:number of bytes write in stdout
*/

int print_int(va_list arg)
{
	int i = 0;
	int count = 0;
	long int numb;
	int my_arr[10];
	char x[1];

	/*Fetch integer from variadic parameters*/
	numb = va_arg(arg, int);
	if (numb < 0)
	{
		numb = -((long int)(numb));
		count = _putchar('-');
	}
	if (numb > 0)
	{
		/*Break the numbers apart and assign them to array*/
		while (numb != 0)
		{
			my_arr[i] = (numb % 10);
			numb = numb / 10;
			if (numb == 0)
			{
				break;
			}
			i++;
		}

		/*Write the contents of the array to stdout*/
		for ((void)i; i >= 0; i--)
		{
			x[0] = ('0' + my_arr[i]);
			count += _putchar(x[0]);
		}
		return (count);
	}
	if (numb == 0)
	{
		count = _putchar(numb + '0');
	}
	return (count);
}
