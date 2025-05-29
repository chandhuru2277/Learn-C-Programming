#include <stdio.h>

// function (int function has with argument-> this function is return the value)
int greet(int arg)
{
    printf("\nReceived value: %d\n", arg);
    return arg;
}

int main(void)
{
    // function calling
    int status = greet(1); // status variable received a "arg" value after function executed
    if (status == 1)
        printf("\nFunction hit\n");
    else
        printf("\nFunction not hit\n");
    return 0;
}