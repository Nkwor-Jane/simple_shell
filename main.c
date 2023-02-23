#include "shell.h"
/**
 * main - runs the simple shell program
 * Return: 0 on success
 */

int main(void)
{
	char *fullpathbuffer  = NULL, *copy = NULL, *buffer = NULL;
	char *PATH = NULL;
	char **av = NULL;
	int exitstatus = 0;

	signal(SIGINT, SIG_IGN);
	PATH = _getenv("PATH");
	if (PATH == NULL)
		return (-1);
	while (1)
	{
		av = NULL;
		prompt();
		buffer = _read();
		if (*buffer != '\0')
		{
			av = tokenise(buffer);
			if (av == NULL)
			{
				free(buffer);
				continue;
			}
			fullpathbuffer = _fullpathbuffer(av, PATH, copy);
			if (builtins(av, buffer, exitstatus) != 0)
				continue;
			exitstatus = _execprocess(av, buffer, fullpathbuffer);
		}
		else
			free(buffer);
	}
	return (0);
}
