#include "shell.h"

char *copystr(char *s1, char *s2)
{
    char *p = s1;

    for (; *s2; s2++, p++)
    {
        *p = *s2;
    }

    *p = '\0';
    return (s1);
}
