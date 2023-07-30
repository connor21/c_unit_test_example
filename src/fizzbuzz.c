#include <stdio.h>
#include <stdlib.h>
#include "fizzbuzz.h"

char* fizzbuzz(int number) {
    char *result = malloc(20);
    
    if (number % 3 == 0 && number % 5 == 0) {
        sprintf(result, "%s", "FizzBuzz");
    } else if (number % 3 == 0) {
        sprintf(result, "%s", "Fizz");    
    } else if (number %5 == 0) {
        sprintf(result,"%s","Buzz");
    } else{
        sprintf(result, "%d", number);
    }
    return result;
};
