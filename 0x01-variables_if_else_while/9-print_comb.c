#include<stdio.h>

/**
 * main - Positive or Negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = '0' ; num < '9' ; num++)
	{
		putchar(num);
		putchar(',');
	}
	putchar('9');
	putchar('\n');
	return (0);
}
