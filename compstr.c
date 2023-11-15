#include "shell.h"

int compstr(char *str1, char *str2)
{
    int i;

    while (*str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    i = (int)*str1 - (int)*str2;
    return (i);
}
