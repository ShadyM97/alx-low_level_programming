#include "main.h"

/**
  * leet - function that encodes a string into 1337
  * @s: string array
  * Return: string array
  */

char *leet(char *s)
{
	int i,j;
	char s1[10] = "aAeEoOtTlL";
	char s2[10] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
			}
		}
	}

	return (s);
}
