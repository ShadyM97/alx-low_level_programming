#include<stdio.h>
#include"main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer to array
 * @n:  number of elements of the array
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
