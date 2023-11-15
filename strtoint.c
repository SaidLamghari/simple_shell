#include "shell.h"

int strtoint(char *s1)
{
    int n = 0;
    int sign = 1;
    int i = 0;

    if (s1 == NULL)
    {
        return 0;
    }

    if (s1[0] == '-')
    {
        sign = -1;
        i = 1;
    }

    while (s1[i] >= '0' && s1[i] <= '9')
    {
        n = n * 10 + (s1[i] - '0');
        i++;
    }

    return (n * sign);
}

