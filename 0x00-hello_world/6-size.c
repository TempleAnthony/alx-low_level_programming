#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints the size of various types on the computer"
 * Return: (0)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("the size of a char: %ld byte(s)\n", sizeof(c));
	printf("the size of an int: %ld byte(s)\n", sizeof(i));
	printf("the size of a long: %ld byte(s)\n", sizeof(li));
	printf("the size of a long long: %ld byte(s)\n", sizeof(lli));
	printf("the size of a float: %ld byte(s)\n", sizeof(f));
	return(0)
}
