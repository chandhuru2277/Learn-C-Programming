#include <stdio.h>

// function (void function has argument but not return anything)
void greet(int arg)
{
    printf("\narg: %d\n", arg);
}

int main(void)
{
    // function calling
    greet(1);
    return 0;
}