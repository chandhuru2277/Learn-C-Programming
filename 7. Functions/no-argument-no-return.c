#include <stdio.h>

// function (void function has no argument-> this function is no return the value)
void greet()
{
    printf("\nFunction hit\n");
}

int main(void)
{
    // function calling
    greet();
    return 0;
}