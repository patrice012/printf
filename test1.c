#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	_printf("String:[%s]\n", "I am a string !");
	_printf("Character:[%c]\n", 'H');
	len = _printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);

	return (1);
}
