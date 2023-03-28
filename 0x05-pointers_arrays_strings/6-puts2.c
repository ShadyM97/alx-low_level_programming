#include<stdio.h>
#include"main.h"
/**
 * puts2 - function that prints even numbers
 *@s: pointer to string
 *
 * Return: void
 */
void puts2(char *s)
{
	int count;
	int i;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i = i + 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
