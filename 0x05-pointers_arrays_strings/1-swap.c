#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * Description: 'swap value for int 'a' and 'b''.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
