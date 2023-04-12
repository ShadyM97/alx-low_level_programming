#include"main.h"
/**
 * creat_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *@size: size of array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails (size = 0)
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str =(char*)malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
