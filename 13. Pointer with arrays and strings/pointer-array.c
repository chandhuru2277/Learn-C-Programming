#include <stdio.h>

int main(void)
{
    int x = 10, y = 20;

    // DECLARE THE ARRAY POINTER
    // DATA_TYPE *VARIABLE_NAME [SIZE];
    int *p[2];

    // INITIALIZE THE ARRAY OF ADDRESS IN THE ARRAY POINTERS
    p[0] = &x;
    p[1] = &y;

    // PRINT THE ARRAY POINTER VALUES
    for (int i = 0; i < 2; i++)
    {
        printf("\nvalue: %d\n", *p[i]);
    }

    return 0;
}