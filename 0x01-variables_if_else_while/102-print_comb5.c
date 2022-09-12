#include <stdio.h>

/**
 * main - prints a combination of two two digit numbers
 *
 * Description: using the main function
 * this program prints the combination of two two digit numbers
 * Return: 0
 */
int main(void)
{
	int c =0;
	int i =0;
	int f_n;
	int l_n;

	while (c <= 99 && i <= 99)
	{
		f_n = (c / 10 + '0');
		l_n = (i / 10 + '0');
		
		{
			if (f_n < l_n)
			{
				putchar(f_n);
				putchar(' ');
				putchar(l_n);

				if (f_n != 98 && l_n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}

