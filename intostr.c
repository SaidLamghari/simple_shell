"include "shell.h"

char *intostr(int value)
{
    int num_len = 0, i;
    int temp = value;
    char *result;

    if (temp <= 0)
    {
        num_len = 1;
        temp = -temp;
    }

    while (temp > 0)
    {
        num_len++;
        temp /= 10;
    }

    result = (char*)malloc((num_len + 1) * sizeof(char));
    result[num_len] = '\0';

    if (value == 0)
    {
        result[0] = '0';
    }
    else if (value < 0)
    {
        result[0] = '-';
    }

    temp = value;
    for (i= num_len - 1; i >= 0 && temp != 0; i--)
    {
        if (temp < 0)
        {
            result[i] = '0' - (temp % 10);
        }
        else
        {
            result[i] = '0' + (temp % 10);
        }
        temp /= 10;
    }

    return (result);
}
