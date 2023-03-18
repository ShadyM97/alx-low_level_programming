#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Positive or Negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet < 'z' ; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
			alphabet++;
		else
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
