#include<stdio.h>
#include"main.h"
/**
 * puts_half - function that prints second half pf string
 *@s: pointer to string
 *
 * Return: void
 */
void puts_half(char *s)
{
	int count;
	int i;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		for (i = count / 2; i < count; i++)
		{
			_putchar(s[i]);
		}
	}
	else
	{
		for (i = (count + 1) / 2 ; i < count; i++)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
