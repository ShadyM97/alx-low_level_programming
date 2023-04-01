#include"main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to string
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == '\n' || 
					s[i - 1] == '\t' || 
					s[i - 1] == ' ' || 
					s[i - 1] == '.' || 
					s[i - 1] == ';' || 
					s[i - 1] == ',' || 
					s[i - 1] == '!' || 
					s[i - 1] == '?' || 
					s[i - 1] == '"' || 
					s[i - 1] == '(' || 
					s[i - 1] == ')' || 
					s[i - 1] == '{' || 
					s[i - 1] == '}' || 
					i == 0)
			s[i] = s[i] - ('a' - 'A');
		}
		i++;
	}
	return (s);
}
