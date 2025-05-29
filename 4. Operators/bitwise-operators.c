#include <stdio.h>

int main(void)
{
    int a = 1, b = 5;
    printf("\nBitwise AND: %d\n", a & b);
    printf("\nBitwise OR: %d\n", a | b);
    printf("\nBitwise XOR: %d\n", a ^ b);
    printf("\nBitwise NOT: %d\n", ~b);
    printf("\nBitwise Left shift: %d\n", a >> 1);
    printf("\nBitwise Right shift: %d\n", a << 1);

    return 0;
}