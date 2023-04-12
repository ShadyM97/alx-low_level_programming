#include"main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given as a parameter.
 *@str: input string
 * Return: a pointer to the string or NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *arr;
	int i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	arr = (char *)malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		arr[i] = str[i];
	return (arr);
}
