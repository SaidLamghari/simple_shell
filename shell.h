#ifndef SHELL_H
#define SHELL_H


#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>

#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>


int strtoint(char *s1);
int num_positive(char *s1);
void displayenv(char **cmd, int *res_proc);
void sh_exit(char **cmd, char **av, int *res_proc, int cmd_in);
void displayerr_message(int cmd_in, char **av, char **cmd);
void excutincmd(char **cmd, char **av, int *res_proc, int cmd_in);
int cmdbuilt(char *cmd);
int builtrecursive(char *cmd, char **listbuilt, int idxstr);
char *find_path(char *cmd);
char *lookupen(char *v_in);
char *intostr(int value);
void displayerr(char *src, char *cmd, int codesrc);
void freestr(char **str);
int _putout(char *c, int n);
int _puterror(char *c, int n);
char *copystr(char *s1, char *s2);
char *concatstr(char *s1, char *s2);
int lengthstr(char *str);
int compstr(char *str1, char *str2);
char *duplstr(const char *s1);
int run_cmd(char **cmd, char **av, int cmd_in);
char **str_toke(char *inpstr);
char *inputline(void);

extern char **environ; 


#endif
