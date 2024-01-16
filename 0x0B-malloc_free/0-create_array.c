#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char		*str;
	unsigned int	i;

	if (!size)
		return (NULL);
	str = malloc((sizeof(char) * size));
	if (!str)
		return (NULL);
	for (i = 0; i < size; i++)
		*(str + i) = c;

	return (str);
}

