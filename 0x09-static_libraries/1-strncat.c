#include<stdio.h>
#include"main.h"
/**
 * _strncat - function that that concatenates two strings
 *including the terminating null byte (\0), to the buffer pointed to by dest.
 *@dest: pointer to destination
 *@src: pointer to source
 *@n: most bytes
 *
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' &&  j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
