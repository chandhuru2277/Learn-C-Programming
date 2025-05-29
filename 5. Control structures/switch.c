#include <stdio.h>

int main()
{
    int status = 1;
    switch (status)
    {
    case 0:
        printf("\nzero\n");
    case 1:
        printf("\none");
    default:
        printf("\nundefined!");
    }

    return 0;
}