#include <stdio.h>
#include <stdlib.h>

int *add(int x)
{
    int a = 10, b = 20;
    // sequence based memory allocation
    int *sum = (int *)malloc(x * sizeof(int));

    if (sum == NULL)
        perror("malloc failed!");
    else
        *sum = a + b;
    sum = (int *)realloc(sum, x * sizeof(int));
    // realloccation memory
    if (sum == NULL)
        perror("realloc is failed!");

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