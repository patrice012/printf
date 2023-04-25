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
 * check_specifier - return a pionter with the matching format
 * @c: format specifier
 * Return: pointer a pointer to a function
 */
int (*select_func(const char *c))(va_list args)
{
	int i;

	f_func func_arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"d", print_dec},
		{"i", print_int},
		{NULL, NULL}};

	/* get the length of the array */
	int len = get_len(sizeof(func_arr), func_arr[0]);

	for (i = 0; i < len; i++)
	{
		/* check if the current format is in the array */
		if (func_arr[i].ch == c)
		{
			/* return the right format base on the format */
			return (func_arr[i].f);
		}
	}
	return (NULL);
}
