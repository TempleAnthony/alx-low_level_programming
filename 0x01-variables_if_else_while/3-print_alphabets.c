#include <stdio.h>

/**
 * main - prints alphabets in uppercase
 *
 * Description: using the main function
 * this program prints "the letters of the alphabet in uppercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
