#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a specific char.
 * @size: size of the desired array
 * @c: the character to initialize with
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char	*str;
	
	if (!size)
		return (NULL);
	str = (char*) malloc((sizeof(char) * size) + 1);
	*str = c;
	return (str);
}

