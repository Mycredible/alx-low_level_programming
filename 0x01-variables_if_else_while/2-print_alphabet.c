#include <stdio.h>

/**
 * main - print alphabets in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
