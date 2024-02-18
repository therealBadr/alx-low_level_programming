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
	unsigned int	i, l1 = 0, l2 = 0;
	char		*ptr;
	while (s1[l1])
		l1++;
	while (s2[l2] && l2 < n)
		l2++;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(sizeof(char) * (l1 + l2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < l2; i++)
		ptr[l1 + i] = s2[i];
	ptr[l1 + l2] = '\0';
	return (ptr);
}
