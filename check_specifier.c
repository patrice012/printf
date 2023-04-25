#include "main.h"

/**
 * get_len - return the length of array
 * @arr_size: the size of array
 * @f: the base data type
 * Return: int
 */

int get_len(size_t arr_size, f_func f)
{
	return (arr_size / sizeof(f));
}
/**
* select_func - return a pionter with the matching format
* @c: char
* Return: function
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
		{NULL, NULL}
		};
	/* get the length of the array */
		int len = get_len(sizeof(func_arr), func_arr[0]);

		for (i = 0; i < len && func_arr[i].ch; i++)
		{
		/* check if the current format is valid */
			if (*(func_arr[i].ch) == *c)
			{
			/* return the right format base on the format */
				return (func_arr[i].f);
			}
		}
		return (NULL);
	}
