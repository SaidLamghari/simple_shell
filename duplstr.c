#include "shell.h"

char *duplstr(const char *s1)
{
    char *temp_ptr;
    int l;
    char *ptr;
    const char *temp;

    if (s1 == NULL)
    {
        return NULL;
    }

    l = 0;
    temp = s1;

    for (; *temp != '\0'; temp++)
    {
        l++;
    }

    ptr = malloc(sizeof(char) * (l + 1));
    if (ptr == NULL)
    {
        return (NULL);
    }

    temp_ptr = ptr;
    while (*s1)
    {
        *temp_ptr++ = *s1++;
    }
    *temp_ptr = '\0';

    return (ptr);
}

