#include "shell.h"

void displayenv(char **cmd, int *res_proc)
{
    int i = 0;
    int len;
    char *env_var = environ[i];

    while (env_var != NULL)
    {
        len = 0;
        while (env_var[len] != '\0')
        {
            len++;
        }
    
        _putout(env_var, len);
        _putout("\n", 1);

        i++;
        env_var = environ[i];
    }

    freestr(cmd);
    *res_proc = 0;
}

