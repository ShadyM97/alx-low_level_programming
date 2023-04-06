#include "main.h"

/**
  * _print_rev_recursion - function that prirnts reversed string.
  * @s: string pointer
  * Return: Void
  */

void _print_rev_recursion(char *s)
{
	int newLineFlag = 0;

	if (*s == '\0' && *(s+1) != '\0')
	{
		newLineFlag = 1;
	}
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	if (newLineFlag == 1)
	{
		_putchar('\n');
		newLineFlag = 0;
	}
}
