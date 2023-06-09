#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);

int (*select_func(const char *c))(va_list arg);


int print_char(va_list arg);
int print_str(va_list arg);
int print_cent(va_list arg);
int print_dec(va_list arg);
int print_int(va_list arg);
int print_decimal(va_list arg);
int print_octal(va_list arg);
int print_lower_hexadecimal(va_list arg);
int print_upper_hexadecimal(va_list arg);


int _putchar(char c);
int _puts(char *str);
int _abs(int n);


/* binary */

int print_binary(va_list arg);

/* helper functions */
int break_number_into_array(long int numb, int *my_arr);
int write_array_to_stdout(int *my_arr, int size);
char *_uitoa(unsigned int num, unsigned int base, int is_uppercase);

/**
 * struct argsList - structure for our format and the corresponding function
 * @ch: pointer to a character
 * @f: pointer to a function
 */
typedef struct formatFunction
{
	char *ch;
	int (*f)(va_list arg);
} f_func;

#endif
