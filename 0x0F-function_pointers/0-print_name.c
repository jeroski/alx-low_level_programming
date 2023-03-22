#include "function_pointers.h"

/**
 *print_name - function that print a name
 *@name: the name to be printed
 *@f: a pointer to the function that print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
