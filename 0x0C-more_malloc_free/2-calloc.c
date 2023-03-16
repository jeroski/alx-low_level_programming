#include "main.h"
#include <stdlib.h>

/**
 *_calloc - function that allocates memory to an array
 *@nmemb: the number of element in the array to be allocated
 *@size: the size of each element in bytes
 *Return: viod pointer to thr allocated space in memory or null pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *j;
	char *k;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = malloc(size * nmemb);

	if (j == NULL)
		return (NULL);
	k = j;

	for (i = 0; i < (size * nmemb); i++)
		k[i] = '\0';
	return (j);
}
