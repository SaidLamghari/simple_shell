#include "shell.h"

int cmdbuilt(char *cmd)
{
    char *listbuilt[] = {
        "exit", "env", "setenv", "cd", NULL};

    return (builtrecursive(cmd, listbuilt, 0));
}
