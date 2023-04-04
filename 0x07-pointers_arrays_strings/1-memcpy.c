#include "main.h"

/**
  * _memcpy - function that copies memory area.
  * @dest: destination array pointer
  * @src: source array pointer
  * @n: number of bytes
  * Return: string array
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;
	
	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
