#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

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
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print()
 * Return: length of the formatted output string
 */


int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, ...);
	const char *p;
	va_list op_arg;
	flags_t flags = {0, 0, 0};

	int count = 0;

	va_start(op_arg, format);
	is_printable(format);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}

			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);

			if (pfunc)
			{
				count += pfunc(op_arg, &flags);
			}
			else
				count += _printf("%%%c", *p);

		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(op_arg);
	return (count);
}
