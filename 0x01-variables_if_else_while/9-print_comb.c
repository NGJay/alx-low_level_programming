#include <stdio.h>
/**
 * main - Print all possible combination of single digit numbers
 *
 * Return: Always
 */
int main(void)
{
	int number;

	for (number = 10; number < 20; number++)
	{
		putchar((number % 10) + '0');
		if (number == 19)
			continue;
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
