#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers.
  * @a: array
  * @size : size of array
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int sum_diag_1, sum_diag_2, i;

	sum_diag_1 = 0;
	sum_diag_2 = 0;
	for (i = 0; i < size; i++)
	{
		sum_diag_1 += a[i * size + i];
	}
	for (i = size -1; i >= 0; i--)
	{
		sum_diag_2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum_diag_1, sum_diag_2);
}
