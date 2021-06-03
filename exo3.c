#include <stdio.h>
#include <stdlib.h>
#include "exo2.h"
#include "mylen.h"

char* copy_and_modify(char* s)
{
    char* copy = alloc_chaine(s);
    copy_chaine(s, copy);
    *copy = 'X';
    return copy;
}

int main()
{
    char* s = "girafe";
    char* copy = copy_and_modify(s);
    printf("%s devient : %s\n", s, copy);
}