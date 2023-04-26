#include <limits.h>
#include <stdio.h>
#include "main.h"

void _p_binary(void);
void _p_string(void);
void _p_hex(void);

/**
  * main - The entry point of the program
  * Return: int .
 */
int main(void)
{
	_p_string();
	_p_binary();
	_p_hex();

	return (0);
}
