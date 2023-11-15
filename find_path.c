#include "shell.h"

char *find_path(char *cmd)
{
    int i = 0;
    struct stat st;
    char *f_path, *seg, *en_pth;
    

    while (cmd[i])
    {
        switch (cmd[i])
        {
        case '/':
            if (stat(cmd, &st) == 0)
                return duplstr(cmd);
            return (NULL);
        }
        i++;
    }

    en_pth = lookupen("PATH");
    if (en_pth == NULL)
        return (NULL);

    for (seg = strtok(en_pth, ":"); seg; seg = strtok(NULL, ":"))
    {
        f_path = malloc(lengthstr(cmd) + 2 + lengthstr(seg));
        if (f_path)
        {
            copystr(f_path, seg);
            concatstr(f_path, "/");
            concatstr(f_path, cmd);
            switch (stat(f_path, &st))
            {
            case 0:
                free(en_pth);
                return f_path;
            }
            free(f_path);
        }
    }
    free(en_pth);
    return (NULL);
}
