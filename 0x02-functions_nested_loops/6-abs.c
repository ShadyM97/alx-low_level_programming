#include<stdio.h>
#include"main.h"
/**
 * _abs - Give back absolute
 * @n: number to be converted
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return n;
	else if (n < 0)
		return n*(-1);
}
