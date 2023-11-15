#include "shell.h"


void displayerr_message(int cmd_in, char **av, char **cmd)
{
    char *idx;
    char messag[] = ": exit: Illegal number: ";
    
    idx = intostr(cmd_in);

    _puterror(av[0], lengthstr(av[0]));
    _puterror(": ", 2);
    _puterror(idx, lengthstr(idx));
    _puterror(messag, lengthstr(messag));
    _puterror(cmd[1], lengthstr(cmd[1]));
    _puterror("\n", 1);

    free(idx);
}
