#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 *
 * Return: NULL if it fails, adress of new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int	len_s1, i, index;
	char		*ptr;

	len_s1 = 0;
	index = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1])
		len_s1++;
	ptr = malloc(sizeof(char) * (len_s1 + n));
	if (ptr == NULL)
		return (NULL);
	for (index = 0; index < len_s1; index++)
	{
		ptr[index] = s1[index];
	}
	i = 0;
	while (index < n)
	{
		ptr[index] = s2[i];
		index++;
		i++;
	}

	ptr[index] = '\0';
	return (ptr);
}
