#include "main.h"

/**
  * _memset - function that fills memory with a constant byte.
  * @s: string pointer
  * @b: constant byte
  * @n: number of bytes
  * Return: string array
  */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		n--;
		ptr++;
	}

	return (s);
}
