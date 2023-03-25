#include<stdio.h>
#include"main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int tmp;

	for (i = 0; i < 10; i++)
	{
		tmp = 0;
		for (j = 0; j < 15; j ++)
		{
			if (j > 9)
			{
				_putchar('1');
				tmp = 10;
			}

			_putchar('0' + (j - tmp));
		}
		_putchar('\n');
	}
}
