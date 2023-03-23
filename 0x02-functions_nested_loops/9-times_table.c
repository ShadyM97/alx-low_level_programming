#include<stdio.h>
#include"main.h"
/**
 * times_table - Print times table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if ((i * j) >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + ((i * j) / 10));
				_putchar('0' + ((i * j) % 10));
			}
			else
			{
				if (i == 0)
				{
					_putchar('0' + (i * j));
					if (j < 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if (j == 0)
				{
					 _putchar('0' + (i * j));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (i * j));
				}
			}
		}
		_putchar('\n');
	}
}
