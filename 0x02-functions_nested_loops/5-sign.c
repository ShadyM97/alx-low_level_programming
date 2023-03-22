#include<stdio.h>
#include"main.h"
/**
 * print_sign - Checks sign
 * @n: character to be checked
 *
 * Return: 1 if character is +ve. 0 if zero. -1 if -ve.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
