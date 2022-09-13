#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	for (num = 01; num <= 89; num++)
	{
		putchar((num % 90) + '0');
		if (num == 89)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
