#include <stdio.h>

/**
 * main - prints a combination of numbers
 *
 * Description: using main function
 * this program prints a combination of numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (j > i)
			{
				putchar(i * '0');
				putchar(j * '0');
				
				if (i <= 8)
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
