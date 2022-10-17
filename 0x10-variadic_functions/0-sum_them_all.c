#include <stdarg.h>

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
 int sum_them_all(const unsigned int n, ...)
 {
 	unsigned int sum = 0, i;
 	va_list arglist;
 	
 	if (n == 0)
 		return (0);
 	
 	va_start(arglist, n);
 	
 	for (i = 0; < n; i++)
 	{
 		sum += va_arg(arglist, int);
 	}
 	va_end(arglist);
 	
 	return (sum);
 	
}
