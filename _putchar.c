#include <unistd.h>

/**
* _putchar - ch
* @c: character
* Return: relative
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
