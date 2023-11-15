#include "shell.h"

int num_positive(char *s1)
{
    int i;
    i = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] < '0' || s1[i] > '9')
        {
            return (0);
        }
        i++;
    }

    return (1);
}
