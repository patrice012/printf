#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#define BUFF_SIZE 1024


/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;



/**
 * struct formatFunction - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */

struct formatFunction
{
	char c;
	int (*f)(va_list ap, ...);
};

typedef struct formatFunction f_func;



int _printf(const char *format, ...);
int _putchar(char c);
char *_itoa(int num, char *str);
int _puts(char *str);

/* print str */
int print_char(va_list l, ...);
int print_string(va_list l, ...);

/* print_nums */
int print_int(va_list l, ...);
void print_number(int n);
int print_unsigned(va_list l, ...);
int count_digit(int i);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* get_print */
int (*get_print(char s))(va_list, ...);

/* get_flag */
int get_flag(char s, flags_t *f);

#endif
