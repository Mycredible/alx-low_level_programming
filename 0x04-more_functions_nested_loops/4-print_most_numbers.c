#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		if ((z == 2) || (z == 4))
			continue;
		else
			_putchar(z + '0');
	}
	_putchar('\n');
}
