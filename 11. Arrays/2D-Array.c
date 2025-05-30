#include <stdio.h>

int main(void)
{
    // SYNTAX: DATA_TYPE VARIABLE_NAME [ROW] [COLUMN]= {VAL1,VAL2,VAL3..N};
    // ARRAY HAS A 3 ROW AND 3 COLUMN
    int arr[3][3] = {11, 22, 33, 44, 55, 66, 77, 88, 99};

    // PRINT THE ARRAY ELEMENTS
    for (int i = 0; i < 3; i++) // ROW
    {
        for (int j = 0; j < 3; j++) // COLUMN
        {
            printf("\tarr[%d][%d]: %d", i, j, arr[i][j]);
        }
        printf("\n");
    }

    // CHANGE THE ARRAY VALUES WITH ADDRESS
    arr[0][0] = 0;
    arr[1][1] = 0;
    arr[2][2] = 0;

    // PRINT THE ARRAY ELEMENTS AFTER UPDATE THE ARRAY ELEMENTS
    printf("\nAfter updatation:\n");
    for (int i = 0; i < 3; i++) // ROW
    {
        for (int j = 0; j < 3; j++) // COLUMN
        {
            printf("\tarr[%d][%d]: %d", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}