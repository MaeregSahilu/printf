#include "main.h"

/**
* specifier_s - A function to take argument and print string
* @s: a parameter of strings to print
* Return: this time returning i
*/

int specifier_s(va_list s)
{
	char *str = va_arg(s, char *);
	int y = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		_putchar(str[i++]);
	}
	return (i);
}
