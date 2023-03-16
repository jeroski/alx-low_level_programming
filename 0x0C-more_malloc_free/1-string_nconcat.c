#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - function that concatenate two string
 *@s1: destenation string
 *@s2: source string
 *@n: the number of bytes from s2 to concatenate s1 
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *j;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;
	j = malloc(sizeof(char) * (len + 1));

	if (j == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		j[len++] = s1[i];

	for (i = 0; s2[i]; i++)
		j[len++] = s2[i];
	
	j[len] = '\0';

	return (j);
}
