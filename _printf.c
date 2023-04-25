#include "main.h"


/**
  * is_printable - check if the input data is printable
  * @format: the current format of the current input
  * Return: -1 if false
  */


int is_printable(const char *format)
{
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	return (0);
}


/**
 * _printf - produces output according to a format
 * @format: is a character string
 * Return: numbers of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, count = 0, (*func)(va_list);

	va_start(arg, format);
	i = 0;

	is_printable(format);

	while (*(format + i))
	{
		if (format[i] != '%')
		{
			/*value = _putchar(format[i]);*/
			count += _putchar(format[i]);;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			func = select_func(&format[i + 1]);
			if (func != NULL)
			{
				/*value = func(arg);*/
				count += func(arg);
				i += 2;
				continue;
			}
			else
			{
				/*value = _putchar(format[i]);*/
				count += _putchar(format[i]);
				i++;
				continue;
			}
		}
	}
	va_end(arg);
	return (count);
}