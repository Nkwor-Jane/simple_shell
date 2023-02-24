#include "shell.h"

/**
 * _strdup - duplicates a string
 * @str: pointer to string
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	int i;
	char *dest = NULL;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return (p - s);
}
/**
 * _splitstring - counts numbers of words in a string
 * @str: pointer to string
 * Return: number of words in a string
 */
int _splitstring(char *str)
{
	int i, search = 1, wordcount = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && search == 1)
		{
			wordcount += 1;
			search = 0;
		}
		if (str[i + 1] == ' ')
			search = 1;
	}
	return (wordcount);
}
/**
 * _strcmp - compares two strings
 * @s1: first  string
 * @s2: second string
 * Return: value
 */
int _strcmp(const char *s1, const char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}

/**
 * _strcat - concatenates two strings
 * @dest: destination stringg
 * @src: source string
 * Return: pointer to resulting sring dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
