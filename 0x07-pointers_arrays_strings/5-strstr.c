#include "main.h"
/**
  * _strstr - function that locates a substring
  * @haystack: source array pointer
  * @needle: compare string
  * Return: pointer to the byte s on match
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;

		while (*ptr1 == *ptr2 && *ptr2 != '\0')
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr2 == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
