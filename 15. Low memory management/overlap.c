#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[10] = "abcdefgh";
    // result is not predictable
    memcpy(arr + 2, arr, 5);
    printf("\noverlap: %s\n", arr);

    char str[10] = "abcdefgh";
    // result is predictable
    memmove(str + 2, str, 5);
    printf("\nnot overlap: %s\n", str);

    return 0;
}
