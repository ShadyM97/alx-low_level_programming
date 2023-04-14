#include"main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: bytes
 * Return: a pointer to the allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	ptr = arr;
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
