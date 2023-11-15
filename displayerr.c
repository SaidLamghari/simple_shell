#include "shell.h"

void displayerr(char *src, char *cmd, int codesrc)
{
    char *idxstr; 
    char messag[] = ": not found\n";

    idxstr = intostr(codesrc);
    _puterror(src, lengthstr(src));
    _puterror(": ", 2);
    _puterror(idxstr, lengthstr(idxstr));
    _puterror(": ", 2);
    _puterror(cmd, lengthstr(cmd));
    _puterror(messag, lengthstr(messag));

    free(idxstr);
}

