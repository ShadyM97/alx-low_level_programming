#include"main.h"
/**
  * _strlen - function that gets string length
  * @string: input string
  * Return: string length
  */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: a pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, s1Len = 0, s2Len = 0;

	s1Len = _strlen(s1);
	s2Len = _strlen(s2);
	if (n >= s2Len)
		str =malloc(sizeof(char) * s1Len + s2Len + 1);
	else
	{
		str =malloc(sizeof(char) * s1Len + n + 1);
	}
	if (!str)
		return (NULL);

	while (i < s1Len)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < s2Len && i < (s1Len + n))
		str[i++] = s2[j++];
	while (n >= s2Len && i < (s1Len + s2Len))
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
