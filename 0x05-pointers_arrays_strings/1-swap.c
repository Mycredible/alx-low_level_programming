#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: first number
 * @b: second number
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

