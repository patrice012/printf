#include <stdio.h>
#include "main.h"

void _more_test(void);

/**
 * _p_hex - test for format -> o u x X
 */


void _p_hex(void)
{
	unsigned int ui;
	long int l = UINT_MAX + 1024;
	/*long int res = INT_MAX * 2;*/

	ui = (unsigned int)INT_MAX + 1024;

	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

	_printf("%u\n", 1024);
	_printf("%u\n", -1024);
	_printf("%u\n", 0);
	_printf("%u\n", UINT_MAX);
	_printf("%u\n", l);
	_printf("There is %u bytes in %u KB\n", 1024, 1);
	_printf("%u - %u = %u\n", 2048, 1024, 1024);
	/*_printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);*/

	_printf("%o\n", 1024);
	_printf("%o\n", -1024);
	_printf("%o\n", 0);
	_printf("%o\n", UINT_MAX);
	_printf("%o\n", l);
	_printf("There is %o bytes in %o KB\n", 1024, 1);
	_printf("%o - %o = %o\n", 2048, 1024, 1024);
	/*_printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);*/

	_more_test();
}


/**
 * _more_test - add more test for format -> o u x X
 */

void _more_test(void)
{
	/*unsigned int ui;*/
	long int l = UINT_MAX + 1024;
	/*long int res = INT_MAX * 2;*/
	/*long int res;*/

	/*ui = (unsigned int)INT_MAX + 1024;*/

	_printf("%x\n", 1024);
	_printf("%x\n", -1024);
	_printf("%x\n", 0);
	_printf("%x\n", UINT_MAX);
	_printf("%x\n", l);
	_printf("There is %x bytes in %x KB\n", 1024, 1);
	_printf("%x - %x = %x\n", 2048, 1024, 1024);
	/*_printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);*/


	_printf("%X\n", 1024);
	_printf("%X\n", -1024);
	_printf("%X\n", 0);
	_printf("%X\n", UINT_MAX);
	_printf("%X\n", l);
	_printf("There is %X bytes in %X KB\n", 1024, 1);
	_printf("%X - %X = %X\n", 2048, 1024, 1024);
	/*_printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);*/


	/*res = INT_MAX + 1024;*/

	/*_printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);*/
	_printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	_printf("uuoxxX%xuoXo\n", 1024);

}
