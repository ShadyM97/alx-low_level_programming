#include<stdio.h>
#include"main.h"
/**
 * jack_baur - Print mins of day
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int m;
	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (k = 0 ; k < 6 ; k++)
			{
				for (m = 0 ; m < 10 ; m++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + m);
					_putchar('\n');
				}
			}
		}
	}
}
