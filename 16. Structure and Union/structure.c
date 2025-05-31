#include <stdio.h>
#include <string.h>

/*
    SYNTAX:
    STRUCT STRUCTURE_NAME
    {
        DATA_TYPE VARIABLE_NAME;
        .....
        DATA_TYPE VARIABLE_NAME_N;
    };
*/

// TOTAL SIZE 104 BYTES
struct student
{
    int id; // 4 BYTE
    char name[100]; // 100 BYTE    
};

int main(void)
{
    // SYNTAX: STRUCT STRUCTURE_NAME OBJ_NAME;
    struct student s1;
    s1.id = 1;
    strcpy(s1.name, "William");

    // direct initialization
    struct student s2 = {2, "Dravid"};

    printf("\nid: %d name: %s\n", s1.id, s1.name);
    printf("\nid: %d name: %s\n", s2.id, s2.name);

    return 0;
}