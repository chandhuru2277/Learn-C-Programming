#include <stdio.h>

int main(void)
{
    int a = 10, b = 2;
    a += 1;
    printf("\na: %d\n", a);
    a -= 1;
    printf("\na: %d\n", a);
    a *= b;
    printf("\na: %d\n", a);
    a /= b;
    printf("\na: %d\n", a);
    return 0;
}
