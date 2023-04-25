#include <stdio.h>
#include <stddef.h>
#include "main.h"



/**
  * get_len - return the length of array
  * @arr_size: array of element
  * @f: base data type of the element
  * Return: int
  */


int get_len(size_t arr_size, f_func f)
{
	return (arr_size / sizeof(f));
}


/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list)
{
	f_func func_arr[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		};

	int flags = get_len(sizeof(func_arr), func_arr[0]);

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}

