#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Print the numbers 0 to 9
 *
 * Return: The numbers from 0 to 9, except 2 and 4
 */

void print_most_numbers(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		if (z == 2 || z == 4)
		{
			continue;
		}
		else
		{
			putchar(z + '0');
		}
	}

	putchar('\n');

}
