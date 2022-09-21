#include "main.h"

/**
  * _strncpy - Copy a string
  * @dest: The destination value
  * @src: The source value
  * @n: The copy limit
  *
  * Return: char value
  */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];

	for ( ; count < n; count++)
		dest[count] = '\0';

	return (dest);
}
