#include "shell.h"


void freestr(char **str)
{
    int i = 0;
    while (str[i])
    {
        free(str[i]);
        i++;
    }

    free(str);
}

