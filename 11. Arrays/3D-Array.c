#include <stdio.h>

int main(void)
{
    // 3D ARRAY
    // SYNTAX: DATA_TYPE VARIABLE_NAME [COUNT] [ROW] [COLUMN];
    int arr[3][3][3] =
        {
            {{201, 202, 203}, {204, 205, 206}, {207, 208, 209}},
            {{301, 302, 303}, {304, 305, 306}, {307, 308, 309}},
            {{401, 402, 403}, {404, 405, 406}, {407, 408, 409}}};

    // PRINT THE ARRAY ELEMENTS
    // COUNT
    for (int i = 0; i < 3; i++)
    {
        // ROW
        for (int j = 0; j < 3; j++)
        {
            // COLUMN
            for (int k = 0; k < 3; k++)
            {
                printf("\tarr[%d][%d][%d]: %d\t", i, j, k, arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // CHANGE THE ARRAY VALUES WITH ADDRESS
    arr[0][0][0] = 0;
    arr[1][1][1] = 0;
    arr[2][2][2] = 0;

    // PRINT THE ARRAY ELEMENTS AFTER UPDATE THE ARRAY ELEMENTS
    printf("\nAfter updatation:\n");
    // COUNT
    for (int i = 0; i < 3; i++)
    {
        // ROW
        for (int j = 0; j < 3; j++)
        {
            // COLUMN
            for (int k = 0; k < 3; k++)
            {
                printf("\tarr[%d][%d][%d]:\t %d", i, j, k, arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}