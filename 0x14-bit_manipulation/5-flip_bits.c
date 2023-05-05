#include "main.h"
/**
  * flip_bits - function that returns the number of bits to
  * flip number to another
  * @n: first integer
  * @m: second integer
  * Return: number of bits to change
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		sum += xor & 1;
		xor = xor >> 1;
	}
	return (sum);
}
