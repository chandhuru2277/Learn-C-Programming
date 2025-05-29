#include <stdio.h>

int main(void)
{
    // constant integer variable
    const int a = 10;
    // local integer variable
    int b = 20;
    // print initialize value
    printf("\na: %d", a);
    printf("\nb: %d", b);

    // a = 30;  this constant variable you cannot assign new value
    b = 40;

    // print updated value
    printf("\na: %d", a);
    printf("\nb: %d\n", b);

    return 0;
}