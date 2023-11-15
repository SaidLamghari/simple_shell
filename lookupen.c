#include "shell.h"


char *lookupen(char *v_in)
{
    int i = 0, compa;
    char *env_var, *var, *val, *in_en;
    
    while (environ[i] != NULL)
    {
        env_var = duplstr(environ[i]);
        var = strtok(env_var, "=");

        compa = compstr(var, v_in);
        switch (compa)
        {
            case 0:
                val = strtok(NULL, "\n");
                in_en = duplstr(val);
                free(env_var);
                return (in_en);
        }
        free(env_var);
        i++;
    }

    return (NULL);
}
