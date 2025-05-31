#include <stdio.h>
#include <string.h>

// sub-structure
struct address
{
    char place[100];
};

// main-structure
struct student
{
    int id;
    char name[100];
    // declare the nested the sub-structure
    struct address addr;
};

int main(void)
{
    // method 1
    struct student s1;
    s1.id = 1;
    strcpy(s1.name, "william");
    strcpy(s1.addr.place, "chennai");
    printf("\nid: %d name: %s place: %s\n", s1.id, s1.name, s1.addr.place);

    // method 2
    struct student s2 = {2, "dravid", {"mumbai"}};
    printf("\nid: %d name: %s place: %s\n", s2.id, s2.name, s2.addr.place);
    return 0;
}