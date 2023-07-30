#include <string.h>
#include <criterion/criterion.h>
#include "../src/fizzbuzz.h"

Test(sample, test) {
    cr_expect(strlen("Test") == 4, "Expected \"Test\" to have a length of 4.");
    cr_expect(strlen("Hello") == 5, "This will always fail, why did I add this?");
    cr_assert(strlen("") == 0);
}

Test(sample, second) {
    cr_expect(strlen("Hello") == 5, "This will always fail, why did I add this?");
}

Test(sample, fizzbuzz) {
    char *value;
    
    value = fizzbuzz(1);
    cr_expect_str_eq(value,"1","only a number");
    free(value);

    value = fizzbuzz(3);
    cr_expect_str_eq(value,"Fizz","Fizz");
    free(value);

    value = fizzbuzz(5);
    cr_expect_str_eq(value,"Buzz","Buzz");
    free(value);   

    value = fizzbuzz(15);
    cr_expect_str_eq(value,"FizzBuzz","FizzBuzz");
    free(value);    
}