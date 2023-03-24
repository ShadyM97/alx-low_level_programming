#include<stdio.h>
#include"main.h"
/**
 * more_numbers - prints the numbers.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int flag;

	flag = 0;
	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j ++)
		{
			if (j > 9)
			{
				_putchar('1');
				flag = 10;
			}

			_putchar('0' + (j - flag));
		}
		_putchar('\n');
	}
}
