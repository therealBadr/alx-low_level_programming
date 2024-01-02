#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 */
void	print_rev(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	while (len - 1 >= 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
