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
	unsigned int i, j, s1Len, s2Len, newStrLen;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1Len = _strlen(s1);
	s2Len = _strlen(s2);
	if (n >= s2Len)
		newStrLen = s1Len + s2Len + 1;
	else
	{
		newStrLen = s1Len + n + 1;
		s2Len = n;
	}

	str = malloc(sizeof(char) * newStrLen);
	if (!str)
		return (NULL);

	for (i = 0; i < s1Len; i++)
		str[i] = s1[i];
	for (j = 0; j < s2Len; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
