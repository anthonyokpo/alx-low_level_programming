#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int d;
	long int e;
	long long int l;
	float f;

	printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("The size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
