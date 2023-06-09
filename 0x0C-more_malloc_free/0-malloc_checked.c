#include"main.h"
/**
 * malloc_checked - function allocates memory using malloc
 * @b: Number of bytes
 * Return: a pointer to the allocated memory. 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
