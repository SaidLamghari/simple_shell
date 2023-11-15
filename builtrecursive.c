#include "shell.h"

int builtrecursive(char *cmd, char **listbuilt, int idxstr)
{
    if (listbuilt[idxstr] == NULL)
    {
        return (0);
    }
    else if (compstr(cmd, listbuilt[idxstr]) == 0)
    {
        return (1); 
    }
    else
    {
        return (builtrecursive(cmd, listbuilt, idxstr + 1));
    }
}
