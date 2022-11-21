#include "main.h"

/**
* specifier_c - A function to print a character
* @c: character to print as an argument
* Return: Always 0
*/

int print_c(va_list c)
{
	char crt = (char)va_arg(c, int);

	_putchar(crt);
	return (0);
}
