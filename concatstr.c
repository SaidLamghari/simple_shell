#include "shell.h"

char *concatstr(char *s1, char *s2)
{
    char *ptr = s1;


    for (; *ptr; ptr++)
    {
    }

    for (; *s2; s2++, ptr++)
    {
        *ptr = *s2;
    }

    *ptr = '\0';

    return (s1);
}
