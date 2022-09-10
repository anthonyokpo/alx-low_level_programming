#include <stdio.h>
/**
* main - Entry point
* Description: "prints the combo of two
*digit numbers"
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = (a + 1); b <= '9'; b++)
		{
			putchar(a);
			putchar(b);

			if (a != '8' || b != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
