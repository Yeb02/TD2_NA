#include <stdio.h>
#include "chain_ops.h"

int length(char c[]) {
    int i = 0;
    while (c[i] != '\0') i++;
    return i;
}

int compare(char c1[], char c2[]) {
    int i = 0;
    while (c1[i] != '\0' && c1[i] == c2[i]) i++;
    if (c1[i] == c2[i]) return 0;
    else return (c1[i] > c2[i]) ? 1 : -1;
}
