#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: the size of the array
 * @cmp: the function pointer to be used to compare values
 * Return: the 1º ele. that @cmp doesn't return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (!array || !cmp)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
