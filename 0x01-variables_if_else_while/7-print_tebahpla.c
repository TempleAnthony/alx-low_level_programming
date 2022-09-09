#include <stdio.h>

/**
 * main - prints the alphabets backwards
 *
 * Description: using the main function
 * this program prints the letters of the alphabets backwards
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
