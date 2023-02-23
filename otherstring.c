#include "shell.h"
/**
 * _getenv - gets PATH member to environ
 * @name: pointer to PATH string
 * Return: pointer to PATH member string of NULL if not found
 */
char *_getenv(const char *name)
{
	int i, result;

	for (i = 0; environ[i]; i++)
	{
		result = _PATHstrcmp(name, environ[i]);
		if (result == 0)
		{
			return (environ[i]);
		}
	}
	return (NULL);
}
/**
 * _env - prints the environ
 * Return: 0 on success
 */
int _env(void)
{
	int i;

	for (i = 0; environ[i]; i++)
		_puts(environ[i]);
	return (0);
}
/**
 * _putchar - writes c to stdout
 * @c: character to print
 * Return: 1 on success
 * On error: return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - prints string sollowed by new line
 * @str: string
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
/**
 * _memset(char *s, char b, unsigned int n)
 * @s: string to fill
 * @b: bytes
 * @n: number of bytes
 * Return: pointer to character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
