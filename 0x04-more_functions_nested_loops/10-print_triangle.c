#include<stdio.h>
#include"main.h"
/**
 * print_triangle - draws a triangle
 *@size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i ; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
