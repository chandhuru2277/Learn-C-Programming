#include <stdio.h>

int main(void)
{
    int a = 100, b = 100, c = 200, d = 200;
    printf("\nAND: %d\n", (a == b) && (c == d));

    c = 201, d = 202;
    printf("\nOR: %d\n", (a == b) || (c == d));

    printf("\nNOT: %d\n", !(a == b));
    return 0;
}