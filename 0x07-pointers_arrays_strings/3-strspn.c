#include "main.h"
/**
  * _strspn - function gets the length of a prefix substring.
  * @s: source array pointer
  * @accept: compare string
  * Return: number of bytes in the initial segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int initial_length = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				initial_length++;
				break;
			}
			else if (accept[i+1] == '\0')
				return (initial_length);
		}
		s++;
	}
	return (initial_length);
}
