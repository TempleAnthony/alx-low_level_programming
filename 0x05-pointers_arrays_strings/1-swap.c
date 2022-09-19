#include "main.h"

/**
 * swap_int - swaps two integers' values
 * @a: the first integer
 * @b: the second integer
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
