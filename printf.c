#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: A string containing zero or more directives.
 *
 * Return: The number of characters printed (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					printed_chars += _putchar(va_arg(args, int));
					break;
				case 's':
					{
						char *str = va_arg(args, char *);
						int i;

						if (str == NULL)
							str = "(null)";

						for (i = 0; str[i]; i++)
							printed_chars += _putchar(str[i]);
						break;
					}

				case 'd':
				case 'i':
				{
					char num_str[32];
					int num = va_arg(args, int);

					_itoa(num, num_str);
					printed_chars += _puts(num_str);

					break;
				}

				case '%':
					printed_chars += _putchar('%');
					break;
				default:
					printed_chars += _putchar('%');
					printed_chars += _putchar(*format);
			}
		}
		else
			printed_chars += _putchar(*format);

		format++;
	}
	va_end(args);

	return (printed_chars);
}
