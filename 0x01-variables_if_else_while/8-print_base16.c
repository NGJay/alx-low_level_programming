#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
		putchar('0' + number);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
		return (0);
}
