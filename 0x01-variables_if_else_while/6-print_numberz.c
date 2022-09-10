#include <stdio.h>

/**
 * main - prints numbers in base ten
 *
 * Description: using the main function
 * this program prints base ten numbers
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
