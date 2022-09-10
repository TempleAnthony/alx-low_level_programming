#include <stdio.h>

/**
 * main - prints a combination of numbers
 *
 * Description: using the main function
 * this program prints the combination of single numbers
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
