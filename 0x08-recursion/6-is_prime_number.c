#include "main.h"

/**
  * prime_check - fuction that checks if prime number
  * @num: input nunmber
  * @divisor: divisor checker
  * Return: 1 if prime, 0 if not
  */

int prime_check(int num, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	if (num % divisor == 0 && divisor > 0)
	{
		return (0);
	}
	return (prime_check(num, divisor - 1));

}

/**
  * is_prime_number - function that checks if number is prime
  * @n: input
  * Return: 1 if prime, 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (prime_check(n, n - 1));
}
