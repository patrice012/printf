#include "main.h"

/**
 * _p_binary - Entry point
 *
 * Return: Always 0
 */


void _p_binary(void)
{
	long int l = UINT_MAX + 1024;/* res = INT_MAX * 2;*/


	_printf("\n");
	_printf("%b\n", 98);
	_printf("%b\n", 1024);
	_printf("%b\n", -1024);
	_printf("%b\n", 0);
	_printf("%b\n", UINT_MAX);
	_printf("%b\n", l);
	_printf("There is %b bytes in %b KB\n", 1024, 1);
	_printf("%b - %b = %b\n", 2048, 1024, 1024);
	/*_printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);*/
}
