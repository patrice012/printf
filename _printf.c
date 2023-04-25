#include "main.h"

/**
  * is_printable - check the input is printable
  * @format: parameter of type const char *.
  * Return: int
 */
int is_printable(const char *format)
{
	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	return (0);
}
/**
 * _printf - produces output according to a format
 * @format: the first string
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, count = 0, value, (*func)(va_list);

	va_start(arg, format);
	is_printable(format);
	while (*(format + i))
	{
		if (format[i] != '%')
		{
			value = _putchar(format[i]);
			count += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			func = select_func(&format[i + 1]);
			if (func != NULL)
			{
				value = func(arg);
				count += value;
				i += 2;
				continue;
			}
			else
			{
				value = _putchar(format[i]);
				count += value;
				i++;
				continue;
			}
		}
	}
	va_end(arg);
	return (count);
}
