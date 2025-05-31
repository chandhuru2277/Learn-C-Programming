#include <stdio.h>

// SYNTAX: ENUM ENUM_VARIABLE { VAL_1, VAL_2... VAL_N};
enum status
{
    false,
    true
};

enum calender
{
    monday = 1,
    turesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6,
    sunday = 7
};

enum flag
{
    ok = 200,
    bad_request = 400,
    internal_server = 500
};

int main(void)
{
    printf("\nfalse: %d\n", false);
    printf("\ntrue: %d\n", true);

    printf("\nmonday: %d\n", monday);
    printf("\nsunday: %d\n", sunday);

    printf("\nOk: %d\n", ok);
    printf("\nBad request: %d\n", bad_request);
    printf("\nInternal server: %d\n", internal_server);

    return 0;
}