#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - function to return sum of it parameters
 *@n: the number of parameters passed to the function
 *@...: the variable number of argurment
 *Return: result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list gun;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(gun, n);
	for (i = 0; i < n; i++)
		sum += va_arg(gun, int);
	va_end(gun);

	return (sum);
}
