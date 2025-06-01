#include <stdio.h>

#define MAX 2
#if MAX>10
    #define PI 31.4
#else
    #define PI 3.14
#endif

int main(void)
{
    printf("\npi: %f\n", PI);
    return 0;
}
