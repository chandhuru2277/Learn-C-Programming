#include <stdio.h>

// FUNCTION WITH POINTER ARGUMENTS
// SYNTAX: RETURN_TYPE FUNCTION_NAME (DATA_TYPES *ARGUMENTS_NAME)
int add(int *a, int *b)
{
    // it's return only value not address
    return *a + *b;
}

// NORMAL GREET FUNCTION
void greet(void)
{
    printf("\nFunction is hit\n");
}

// THIS POINTER FUNCTION RETURN THE ADDRESS OF VARIABLE
char *pointer_function(char *q)
{
    printf("\npointer functions is hit\n");
    *q = 'b';
    return q;
}

int main(void)
{
    // FUNCTION DECLARATION
    // RETURN_TYPE (*FUNCTION_POINTER_NAME)(DATA_TYPE_ARGUMENTS..N)= &FUNCTION_NAME;
    void (*fp)() = &greet;
    // POINTER FUNCTION IS CALLING
    fp();

    // SEND ARGUMENTS AS A ADDRESS
    int x = 10, y = 20;
    printf("\nAdd: %d\n", add(&x, &y));

    char character = 'a';
    printf("\naddress of character: %p\n", &character);
    printf("\nvalue of character: %c\n", character);

    // POINTER FUNCTION IS CALLING
    char *result = pointer_function(&character);

    printf("\nvalue of result: %p\n", result);
    printf("\nvalue of character: %c\n", character);
    printf("\ndereference of result: %c\n", *result);

    return 0;
}