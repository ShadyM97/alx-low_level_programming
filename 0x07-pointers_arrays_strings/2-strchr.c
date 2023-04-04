#include "main.h"

/**
  * _strchr - function that copies memory area.
  * @s: source array pointer
  * @c: compare character
  * Return: Always 0 (Success)
  */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
