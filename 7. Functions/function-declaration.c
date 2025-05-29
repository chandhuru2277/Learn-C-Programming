#include <stdio.h>

// function declaration
// syntax: RETURN_TYPE FUNCTION_NAME (ARGUMENTS_DATA_TYPE...N);
void fun2(void);

// fun1 defined in the upper of main()
void fun1()
{
    printf("\nfunction 1 is called\n");
}

int main(void)
{
    fun1();
    fun2();
    return 0;
}

// fun2 defined in lower of main(), so we should declare the function
void fun2()
{
    printf("\nfunction 2 is called\n");
}