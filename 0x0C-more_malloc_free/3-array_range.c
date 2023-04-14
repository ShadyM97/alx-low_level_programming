#include"main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: a pointer to the new created array
 */
int *array_range(int min, int max)
{
	int *arr, i, NumOfElements, num;

	if (min > max)
		return (NULL);

	NumOfElements = max - min + 1;
	arr = malloc(NumOfElements * sizeof(int));
	if (arr == NULL)
		return (NULL);

	num = min;
	i = 0;
	while (num <= max && i < NumOfElements)
	{
		arr[i] = num;
		i++;
		num++;
	}
	return (arr);
}
