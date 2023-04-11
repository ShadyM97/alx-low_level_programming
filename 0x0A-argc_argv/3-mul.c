#include"main.h"
/**
 *main - program that prints the product of two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	return (0);
}
