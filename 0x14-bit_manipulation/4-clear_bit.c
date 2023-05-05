#include "main.h"
/**
  * clear_bit - function that sets the value of a bit to 0 at a given index
  * @n: integer
  * @index: index to set 0
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	mask = mask << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
