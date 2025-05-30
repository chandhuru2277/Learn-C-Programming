#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;
    printf("\nAddress of a: %p\n", &a);
    for (int i = 1; i <= 5; i++)
    {
        printf("\nAdd %d with address: %p\n", i, p + i);
    }

    return 0;
}