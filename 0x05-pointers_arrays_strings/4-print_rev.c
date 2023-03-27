#include<stdio.h>
#include"main.h"
/**
 * print_rev - function that returns the length of a string
 *@s: pointer to string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	count = count - 1;
	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
