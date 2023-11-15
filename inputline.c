#include "shell.h"

char *inputline(void)
{
    ssize_t num;
    char *inpstr = NULL;
    size_t i = 0;
    


    isatty(STDIN_FILENO) ? _putout("$ ", 2) : 0;
    num = getline(&inpstr, &i, stdin);
    return ((num == -1) ? (free(inpstr), NULL) : inpstr);
}
