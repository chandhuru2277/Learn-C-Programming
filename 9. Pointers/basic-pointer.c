#include <stdio.h>

int main(void)
{
    // pointer declaration  (SYNTAX: DATA_TYPE *POINTER_VARIABLE_NAME)
    int *p;

    // normal integer variable
    int a = 10;
    printf("\naddredd of a: %p\n", &a);
    printf("\nvalue in a: %d\n", a);

    // "p" store the address of "a"
    p = &a;
    printf("\naddress of p: %p\n", &p);

    // "p" has the address of "a"
    printf("\nvalue of p: %p\n", p);

    // deference the "p", that is point to the address of "a" value using (*) symbol
    printf("\nderefernce the p: %d\n", *p);
    return 0;
}