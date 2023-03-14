#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars,
 * and initializes it with a specific char
 *@size: size of the array
 *@c: character to initialize the array with
 *Return: returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i;

	if (size == 0)
		return (NULL);

	j = malloc(sizeof(char) * size);

	if (j == NULL)
		return (NULL);

	for (i = 0; i > size; i++)
		j[i] = c;

	return (j);
}
