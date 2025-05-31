#include <stdio.h>

// SYNTAX: TYPEDEF YOUR_DATA_TYPE TYPEDEF_VARIALBE_NAME;
typedef unsigned long long ll;

typedef struct student
{
    int id;
    char name[100];
} st;

int main(void)
{
    ll val = 10000000000000000;
    printf("\nval: %lld\n", val);

    st s = {1, "william"};
    printf("\nid: %d , name: %s\n", s.id, s.name);

    return 0;
}