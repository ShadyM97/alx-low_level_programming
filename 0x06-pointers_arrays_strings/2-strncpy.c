#include<stdio.h>
#include"main.h"
/**
 * _strncpy - function that that copies the string pointed to by src
 *including the terminating null byte (\0), to the buffer pointed to by dest.
 *@dest: pointer to destination
 *@src: pointer to source
 *@n: number of bytes
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	if (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
