#include <stdio.h>
#include "main.h"


/**
 * _p_hex - test for format -> o u x X
 */


void _p_hex(void)
{
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;

	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
}
