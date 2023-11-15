#include "shell.h"

char **str_toke(char *inpstr)
{
    int j = 0, i = 0;
    char *cu_word, *cpy;
    char **cmd;

    if (inpstr == NULL)  /*!inpstr*/
    {
        return NULL;
    }    
    cpy = duplstr(inpstr);

    cu_word = strtok(cpy, " \t\n");
    if (!cu_word) /*cu_word == NULL*/
    {
        free(inpstr), free(cpy);
        return (NULL);
    }

    for (; cu_word != NULL; cu_word = strtok(NULL, " \t\n"))
    {
        j++;
    }
    free(cpy);

    cmd = malloc(sizeof(char *) * (j + 1));
    if (cmd == NULL) /*!cmd*/
    {
        free(inpstr);
        return (NULL);
    }

    cu_word = strtok(inpstr, " \t\n");
    for (; cu_word != NULL; cu_word = strtok(NULL, " \t\n"))
    {
        cmd[i] = duplstr(cu_word);
        i++;
    }
    free(inpstr), cmd[i] = NULL;
    return (cmd);
}
