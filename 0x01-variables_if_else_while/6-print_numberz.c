#include <stdio.h>
/**
 * main - Print all single digit numbers of base TEN, starting from ZERO
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar('0' + number);
	putchar('\n');
	return (0);
}
