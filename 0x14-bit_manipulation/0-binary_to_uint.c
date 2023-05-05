#include "main.h"
/**
  * _strlen - function that returns length of string
  * @s: string
  * Return: length of string
  */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
  * power - function that gets the power
  * @base: base
  * @exp: exponent
  * Return: result (int)
  */

int power(int base, int exp)
{
	int i, num = 1;

	for (i = 0; i < exp; ++i)
		num *= base;
	return (num);
}
/**
  * binary_to_uint - function that converts a binary number to an unsigned int
  * @b: binary
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int length, i;

	if (b == NULL)
		return (sum);
	length = _strlen(b);
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * power(2, length - i - 1);
	}
	return (sum);
}
