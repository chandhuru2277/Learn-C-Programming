#include <stdio.h>

#define MAX 200
#define MIN -1

#if MAX > 1000
#define S_MAX 100
#elif MIN < 0
#define S_MIN 0
#endif

int main(void)
{
    printf("\nMIN: %d\n", S_MIN);
    return 0;
}
