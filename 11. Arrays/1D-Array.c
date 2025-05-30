#include <stdio.h>

int main(void)
{
    // SYNTAX: DATA_TYPE VARIABLE_ANEM[SIZE] = {VAL1, VAL2, VAL3....N};
    int arr[5] = {11, 22, 33, 44, 55};
    // STARTING ADDRESS
    arr[0];
    // ENDING ADDRESS
    arr[4];

    // PRINT THE ARRAY ELEMENTS
    for (int i = 0; i < 5; i++)
    {
        printf("\narr[%d]: %d\n", i, arr[i]);
    }

    // CHANGE THE ARRAY VALUES WITH ADDRESS
    arr[1]= 20;
    arr[3]= 30;

    // PRINT THE ARRAY ELEMENTS AFTER UPDATE THE ARRAY ELEMENTS
    printf("\nAfter updatation:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\narr[%d]: %d\n", i, arr[i]);
    }

    return 0;
}