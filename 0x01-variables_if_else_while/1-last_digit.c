#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
* Description: "Tells the value of the last digit in relatn to various options"
* Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld_n = n % 10;
	if (ld_n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld_n);
	}
	else if (ld_n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld_n);
	}
	else if (ld_n < 6 && ld_n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld_n);
	}
	return (0);
}
