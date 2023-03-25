#include<stdio.h>
#include"main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n: number of times
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		while ((n - 1) > 0)
		{
			_putchar(' ');
			n--;
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
