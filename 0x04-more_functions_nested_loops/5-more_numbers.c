#include"main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, tmp;

	for (i = 0; i < 10; i++)
	{
		tmp = 0;
		for (j = 0; j < 15; j++)
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
