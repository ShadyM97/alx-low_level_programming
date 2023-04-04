#include "main.h"
/**
  * _strpbrk - function that searches a string 
  * for any of a set of bytes
  * @s: source array pointer
  * @accept: compare string
  * Return: pointer to the byte s on match
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
