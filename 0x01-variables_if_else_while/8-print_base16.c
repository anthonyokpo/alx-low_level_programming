#include <stdio.h>
/**
* main - Entry point
* Description: "prints the base 16 numbers
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int h = '0';
	char j = 'a';

	while (h <= '9')
	{
		putchar(h);
		h++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
