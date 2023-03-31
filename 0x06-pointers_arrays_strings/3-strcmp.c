#include<stdio.h>
#include"main.h"

/**
 * _strcmp - function that compares two strings.
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 * Return: return ASCII difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
