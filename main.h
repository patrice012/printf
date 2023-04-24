#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
/*int _putchar(char buffer[], int *buff_size);*/
int _putchar(char c);
char *_itoa(int num, char *str);
int _puts(char *str);



/**
 * struct formatFunction - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct formatFunction
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} f_func;


#endif
