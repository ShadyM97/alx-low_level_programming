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
	int i = n;

	while (i >= 0)
	{
		*dest = *src;
		i--;
		dest++;
		src++;
	}

	return (dest);
}
