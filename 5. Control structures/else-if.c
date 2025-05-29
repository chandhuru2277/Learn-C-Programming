#include <stdio.h>

int main()
{
    int status = 0;
    if (status)
        printf("\ncondition is true\n");
    else if (status == 0)
        printf("\nvalue is zero\n");
    else
        printf("\nvalue is undefined\n");

    return 0;
}