#include <stdio.h>
#include <stdlib.h>
#include "mylen.h"

int len_array(char chaine[])
{
    int res = 0;
    while(chaine[res])
    {
        res++;
    }

    return res;
}

char* alloc_chaine(char chaine[])
{
    return malloc(sizeof(char) * len_array(chaine));
}

void copy_chaine(char chaine[], char* mem)
{
    for(int i = 0; i < len_array(chaine); i++)
    {
        *(mem + i) = chaine[i];
    }
}

int occurences_e(char* chaine)
{
    int res = 0;
    for(int i = 0; i < mylen(chaine); i++)
        if(*(chaine + i) == 'e')
            res++;

    return res;
}

int main()
{
    char chars[] = "electricite";
    char* chaine = alloc_chaine(chars);
    copy_chaine(chars, chaine);
    printf("Occurences de E dans %s : %d\n", chars, occurences_e(chaine));
}