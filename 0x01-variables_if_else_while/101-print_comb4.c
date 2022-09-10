#include <stdio.h>
/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			for (digit3 = 0; digit3 <= 9; digit3++)
			{
				if (digit3 > digit2 && digit2 > digit1)
				{
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(digit3 + '0');
					if (digit1 != 7 || digit2 != 8 || digit3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
