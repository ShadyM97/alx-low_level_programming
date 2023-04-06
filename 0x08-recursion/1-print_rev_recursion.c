#include "main.h"

/**
  * _print_rev_recursion - function that prirnts reversed string.
  * @s: string pointer
  * Return: Void
  */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
