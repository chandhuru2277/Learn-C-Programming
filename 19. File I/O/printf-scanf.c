#include <stdio.h>

int main(void)
{
    char buffer[100];
    printf("\nEnter message:\n");
    scanf("%s", buffer);
    printf("\nyour message: %s\n", buffer);
    return 0;
}