#include "main.h"

/**
  * _strchr - function that copies memory area.
  * @s: source array pointer
  * @c: compare character
  * Return: Always 0 (Success)
  */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
