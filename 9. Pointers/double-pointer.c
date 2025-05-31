#include <stdio.h>
#include <string.h>

int main(void)
{
    int a = 10;
    int *p;   // single pointer
    int **dp; // double pointer

    printf("\naddress of a: %p\n", &a);
    printf("\naddress of p: %p\n", &p);
    printf("\naddress of dp: %p\n", &dp);

    p = &a;
    printf("\np has address of a: %p\n", p);

    dp = &p;
    printf("\ndp has address of p: %p\n", dp);

    printf("\nvalue of p: %d\n", *p);
    printf("\naddress of dp: %p\n", *dp);
    printf("\nvalue of dp: %d\n", **dp);

    return 0;
}