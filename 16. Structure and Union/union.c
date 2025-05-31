#include <stdio.h>
#include <string.h>

/*
    SYNTAX:
    UNION STRUCTURE_NAME
    {
        DATA_TYPE VARIABLE_NAME;
        .....
        DATA_TYPE VARIABLE_NAME_N;
    };
*/

// TOTAL SIZE 100 BYTES (CHOOSE HIGHTER MEMORY)
union student
{
    int id;         // 4 BYTE
    char name[100]; // 100 BYTE
};

int main(void)
{
    // SYNTAX: STRUCT STRUCTURE_NAME OBJ_NAME;
    union student s1;
    s1.id = 1;
    strcpy(s1.name, "William");

    printf("\nid: %d name: %s\n", s1.id, s1.name);

    return 0;
}