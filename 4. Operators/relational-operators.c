#include <stdio.h>

int main(void)
{
    int a = 100, b = 20;
    printf("\na>b: %d\n", a > b);
    printf("\na<b: %d\n", a < b);

    a = 100, b = 100;
    printf("\na>=b: %d\n", a >= b);
    printf("\na<=b: %d\n", a <= b);
    printf("\na==b: %d\n", a == b);

    b = 10;
    printf("\na!=b: %d\n", a != b);
    return 0;
}