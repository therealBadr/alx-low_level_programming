#include "main.h"

/**
 * _strlen - counts the length of an array
 * @s: pointer that points to the beginning
 * of the array
 * Return: the length of the string
 */
int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
