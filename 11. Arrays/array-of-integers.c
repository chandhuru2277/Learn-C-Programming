#include <stdio.h>

int main(void)
{
    // array of integers
    int arr[] = {10, 20, 30, 40, 50};

    // find the size of array by using sizeof()
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("\nsize of array: %d", size);

    // print the array values
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\n");

    return 0;
}