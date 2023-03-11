
#include "main.h"
#include <stdio.h>

/**
 *main - program that print the number of argument passed to it
 *@argc: number of argument
 *@argv: array of string
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
