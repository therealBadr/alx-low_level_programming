#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int	len_s1, len_s2;
	char	*ptr;

	len_s1 = 0;
	len_s2 = 0;
	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;
	if (s1 == NULL)
		len_s1 = 0;
	if (s2 == NULL)
		len_s2 = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * (len_s1 + len_s2 - 1));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
