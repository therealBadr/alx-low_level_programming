#include "main.h"

/**
 * malloc_checked - allocate memory.
 * @b: size to be allocated
 *
 * Return: adress to the pointer
 */

void	*malloc_checked(unsigned int b)
{
	char	*ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
