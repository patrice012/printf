#include "main.h"
#include <stdio.h>

/**
  * _p_string - test for string input
  */


void _p_string(void)
{
	int len = 0, len2 = 0;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");


	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");


	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	/*printf("Unknown:[%r]\n");*/
}
