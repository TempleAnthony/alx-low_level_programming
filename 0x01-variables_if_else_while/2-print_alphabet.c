#include <stdio.h>

/**
 * main - prints the alphabets
 *
 * Description: using the main function
 * this program prints "the letters of the alphabets
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
