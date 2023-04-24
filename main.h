#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#define BUFF_SIZE 1024



 /**
   * struct formatFunction - struct to choose the right function depending
   * on the format specifier passed to _printf()
   * @c: format specifier
   * @f: pointer to the correct printing function
  */

struct formatFunction
{
	char c;
	int (*f)(va_list ap);
};

typedef struct formatFunction f_func;



int _printf(const char *format, ...);
/*int _putchar(char buffer[], int *buff_size);*/
int _putchar(char c);
char *_itoa(int num, char *str);
int _puts(char *str);
int print_char(va_list l);
int print_string(va_list l);

/* get_print */
int (*get_print(char s))(va_list);

#endif
