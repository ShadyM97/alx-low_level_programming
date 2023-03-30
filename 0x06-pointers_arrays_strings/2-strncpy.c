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
	if (dest == NULL)
	{
		return (NULL);
	}

	while ((*src != '\0') && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
