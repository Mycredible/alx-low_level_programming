#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 89; num++)
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
