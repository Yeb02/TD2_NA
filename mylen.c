#include <stdio.h>
#include <stdlib.h>

int mylen(char* s)
{
    int res = 0;
    while(*(s + res))
    {
        res++;
    }

    return res;
}
