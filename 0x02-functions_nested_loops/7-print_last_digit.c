#include<stdio.h>
#include"main.h"
/**
 * print_last_digit - Print last digit
 * @n: number to do process
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n % 10;
		n = n * (-1);
	}
	_putchar('0' + (n % 10));
	return (n % 10);
}
