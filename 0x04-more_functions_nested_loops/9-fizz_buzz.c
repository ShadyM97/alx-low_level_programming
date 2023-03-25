#include"main.h"
/**
 * main - Fizz Bus
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("Fizz Buzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			{
				if (num == 100)
					printf("Buzz");
				else
					printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}
