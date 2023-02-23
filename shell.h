#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fnctl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/type.h>

extern char **environ;

/*PROGRAM FLOW*/
int prompt(void);
char *_read(void);
int *_fullpathbuffer(char **av, char *PATH, char *copy);
int builtins(char **av, char *buffer, int exitstatus);
int _execprocess(char **av, char *buffer, char *fullpathbuffer);

/*STRING HELPERS*/
char *_strdup(char *str);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
int _strcmp(const char *s1, const char *s2);
int _strlen(char *s);

/* TOEKNISE AND PATH HELPER FUNCTIONS*/
char **tokenise(char *buffer);
int _splitPATH(char *str);
int _PATHstrcmp(const char *s1, const char *s2);
char *_concat(char *tmp, char **av, char *tok);

/*OTHER STRING HELPERS*/
char *_getenv(const char *name);
int _env(void);
void _puts(char *str);
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);

#endif /*SHELL_H*/
