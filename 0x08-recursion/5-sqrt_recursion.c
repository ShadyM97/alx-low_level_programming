#include "main.h"
/**
  * findroot - fuction that finds natural root
  * @num - input nunmber
  * @root - counter
  */

int findroot(int num, int root)
{
	if (root * root == num)
	{
		return (root);
	}
	else if (root * root < num)
	{
		return (findroot(num, root + 1));
	}
	else
	{
		return (-1);
	}
}

/**
  * _sqrt_recursion - function that returns root of a number
  * @n: input
  * Return: natural square root , -1 if no natural square root
  */

int _sqrt_recursion(int n)
{
	int rootStart = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
		return (findroot(n, rootStart));
}
