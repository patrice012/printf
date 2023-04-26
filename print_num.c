#include <stdarg.h>
#include <stdio.h>

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
	int count = 0, i = 0;
	long int numb = va_arg(arg, int);
	int my_arr[10];
	char x[1];

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
 * break_number_into_array - turn integer to array of integer
 * @numb: integer
 * @my_arr: pointer to array of interger
 * Return: number
 */

int break_number_into_array(long int numb, int *my_arr)
{
	/* set i to 1 to match the number of digit in the integer */
	int i = 1;

	while (numb != 0)
	{
		my_arr[i] = (numb % 10);
		numb = numb / 10;
		if (numb == 0)
			break;
		i++;
	}
	return (i);
}


/**
 * write_array_to_stdout - write array element into stdout
 * @my_arr: pointer to array of interger
 * @size: size of array
 * Return: the number of element written
 */

int write_array_to_stdout(int *my_arr, int size)
{
	int count = 0;
	/* x need to have to element: our character and the default '\0' string */
	char x[1];
	int i;

	for (i = size; i > 0; i--)
	{
		/*
		 *convert integer to char by doing: '0' + my_char[i] and
		 *push the result into array
		 */
		x[0] = ('0' + my_arr[i]);
		count += _putchar(x[0]);
	}
	return (count);
}

