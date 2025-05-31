#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[100];
};

int main(void)
{
    // STRUCTURE POINTER
    struct student *sp;

    struct student s1;
    // ASSIGN STRUCTURE POINTER
    sp = &s1;

    sp->id = 1;
    strcpy(sp->name, "william");
    printf("\nid: %d name: %s\n", sp->id, sp->name);

    return 0;
}