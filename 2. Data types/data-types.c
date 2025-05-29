// HEADER FILE
#include <stdio.h>
#include <limits.h>

// MAIN FUNCTION
int main(void)
{
    signed short signed_short_variable;
    unsigned short unsigned_short_variable;
    printf("\nSize of SHORT: %hd\n", __SIZEOF_SHORT__);
    printf("\nSHORT (MIN RANGE): %hd\n", SHRT_MIN);
    printf("\nSHORT (MAX RANGE): %hd\n", SHRT_MAX);

    signed int signed_int_variable;
    unsigned int unsigned_int_variable;
    printf("\nSize of INT: %d\n", __SIZEOF_INT__);
    printf("\nINT (MIN RANGE): %d\n", INT_MIN);
    printf("\nINT (MAX RANGE): %d\n", INT_MAX);

    signed long int signed_long_int_variable;
    unsigned long int unsigned_lont_int_variable;
    printf("\nSize of LONG INT: %d\n", __SIZEOF_LONG__);
    printf("\nLONG INT (MAX RANGE): %ld\n", __LONG_MAX__);

    signed long long int signed_long_long_int_variable;
    unsigned long long int unsigned_long_long_int_variable;
    printf("\nSize of LONG LONG INT: %d\n", __SIZEOF_LONG_LONG__);
    printf("\nLONG LONG INT (MIN RANGE): %lld\n", __LONG_LONG_MAX__);

    signed char signed_char_variable;
    unsigned char unsigned_char_variable;
    printf("\nSize of CHAR: %d\n", CHAR_BIT);

    float float_variable;
    printf("\nSize of FLOAT: %d\n", __SIZEOF_FLOAT__);
    printf("\nFLOAT (MIN RANGE): %f\n", __FLT_MIN__);
    printf("\nFLOAT (MAX RANGE): %f\n", __FLT_MAX__);

    double double_variable;
    printf("\nSize of DOUBLE: %d\n", __SIZEOF_DOUBLE__);
    printf("\nDOUBLE (MIN RANGE): %lf\n", __DBL_MIN__);
    printf("\nDOUBLE (MAX RANGE): %lf\n", __DBL_MAX__);

    long double long_double_variable;
    printf("\nSize of LONG DOUBLE: %d\n", __SIZEOF_LONG_DOUBLE__);
    printf("\nLONG DOUBLE (MIN RANGE): %Lf\n", __LDBL_MIN__);
    printf("\nLONG DOUBLE (MAX RANGE): %Lf\n", __LDBL_MAX__);

    return 0;
}