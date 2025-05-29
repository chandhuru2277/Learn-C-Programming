#include <stdio.h>

// function (int function has no argument-> this function is return the value)
int greet()
{
    return 1;
}

int main(void)
{
    // function calling
    int status = greet(); // status variable received "1" after function is executed
    if (status)
        printf("\nFunction hit\n");
    else
        printf("\nFunction not hit\n");
    return 0;
}