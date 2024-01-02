#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 */
void	rev_string(char *s)
{
	int	i;
	int	len;
	int	temp;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	while (i < len - 1)
	{
		temp = s[i];
		s[i] = s[len - 1];
		s[len - 1] = temp;
		i++;
		len--;
	}
}
