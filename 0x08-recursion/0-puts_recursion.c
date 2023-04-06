#include "main.h"

/**
  * _puts_recursion - function that fills memory with a constant byte.
  * @s: string pointer
  * Return: Void
  */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
