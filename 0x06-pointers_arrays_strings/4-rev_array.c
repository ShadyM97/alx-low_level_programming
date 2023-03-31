#include<stdio.h>
#include"main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @s1: pointer to string 1
 * @n:  number of elements of the array
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
