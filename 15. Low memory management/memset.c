#include <stdio.h>
#include <string.h>

int main(void)
{
    int size = 5;
    int buffer[size];
    int initialzation_value = 0;

    // MEMSET(ARRAY, BUFFER OR STRUCTURE, INITIALIZE_VALUE_OF_CHAR OR INT(0), SIZE OF ITEM)
    memset(buffer, initialzation_value, size); // set "0" value in buffer array

    for (int i = 0; i < size; i++)
    {
        printf("\nbuffer[%d]: %d\n", i, buffer[i]);
    }

    char str[100] = "Hello World";
    int length = 3;
    char symbol = '#';
    // set symbol #
    memset(str, symbol, length);
    printf("\nstr: %s\n", str);

    return 0;
}