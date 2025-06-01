#include <stdio.h>
#include <stdlib.h>

int *add(int x)
{
    int a = 10, b = 20;
    // block based memory allocation
    int *sum = (int *)calloc(x, sizeof(int));

    if (sum == NULL)
        perror("malloc failed!");
    else
        *sum = a + b;

    return sum;
}

int main(void)
{
    int n = 2;
    int *p;
    p = add(n);

    printf("\nsum: %d\n", *p);
    free(p);

    return 0;
}