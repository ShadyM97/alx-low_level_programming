#include<stdio.h>
#include"main.h"
/**
 * rev_string - function that reverse a string
 *@s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int count;
	int i;
	char tmp;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	count = count - 1;
	for (i = 0; i <= (count / 2); i++)
	{
		tmp = s[i];
		s[i] = s[count - i];
		s[count - i] = tmp;
	}
}
