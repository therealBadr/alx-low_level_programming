#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer a newly-allocated space in memory
 * 		containing a copy of the string given as a parameter
 * @str: The string to be copied
 * 
 * Return: If str = NULL - Null
 * 		Otherwise - a pointer to the duplicated string
 */

char	*_strdup (char *str)
{
	char	*dup;
	int	i;
	int	len;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}
