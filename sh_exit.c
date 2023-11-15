#include "shell.h"

void sh_exit(char **cmd, char **av, int *res_proc, int cmd_in)
{
    int codexit = (*res_proc);
    
    if (cmd[1])
    {
        if (num_positive(cmd[1]))
        {
            codexit = strtoint(cmd[1]);
        }
        else
        {
            displayerr_message(cmd_in, av, cmd);
            
            freestr(cmd);
            (*res_proc) = 2;
            return;
        }
    }
    freestr(cmd);
    exit(codexit);
}

