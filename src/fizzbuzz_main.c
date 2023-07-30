#include <stdio.h>
#include <stdlib.h>
#include "fizzbuzz.h"

int main(void)
{
    int i;
    char *fizz_buzz;

    for(i=1; i<=100; ++i) {
        fizz_buzz = fizzbuzz(i);
        printf("%s ",fizz_buzz);
        free(fizz_buzz);
    }
    printf("\n");
    return 0;
}