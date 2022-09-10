#include <stdio.h>
/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 * a comma followed by a space, in ascending order.
 *
 * Return: Always 0
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 10; digit1 <= 19; digit1++)
	{
		for (digit2 = 10; digit2 <= 19; digit2++)
		{
			if ((digit2 % 10) > (digit1 % 10))
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				if (digit1 != 18 || digit2 != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
