#include<stdio.h>
#include"main.h"
/**
 * _strlen - function that returns the length of a string
 *@s: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	count = 1;
	while (s[count] != NULL)
	{
		count++;
	}
	return (count);
}
