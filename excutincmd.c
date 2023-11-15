#include "shell.h"

void excutincmd(char** cmd, char** av, int* res_proc, int cmd_in)
{
    if (cmd[0] == NULL)
    {
        return;
    }

    switch (compstr(cmd[0], "exit"))
    {
        case 0:
            sh_exit(cmd, av, res_proc, cmd_in);
            return;
    }

    switch (compstr(cmd[0], "env"))
    {
        case 0:
            displayenv(cmd, res_proc);
            return;
    }

}
