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
	int strCompare = 0;

	while ((*s1 != '\0' || *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	strCompare = *s1 - *s2;
	return (strCompare);
}
