#include "main.h"

/**
 * puts2 - prints every other character
 * of a string
 * @str: pointer to the string
 */
void	puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
}
