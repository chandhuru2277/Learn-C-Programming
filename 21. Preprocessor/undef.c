#include <stdio.h>

#define PI 3.14
#undef PI // undefine the PI

int main(void)
{
    printf("\npi: %f\n", PI);
    return 0;
}
