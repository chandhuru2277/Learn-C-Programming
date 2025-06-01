#include <stdio.h>

#define MAX 20
#if MAX>10
    #define PI 3.14
#endif

int main(void)
{
    printf("\npi: %f\n", PI);
    return 0;
}
