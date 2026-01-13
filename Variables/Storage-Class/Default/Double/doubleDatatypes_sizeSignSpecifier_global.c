#include <stdio.h>

double Double;

/*
signed double signedDouble; // error: both 'signed' and 'double' in declaration specifiers
double signed doubleSigned; // error: both 'signed' and 'double' in declaration specifiers

unsigned double unsignedDouble; // error: both 'unsigned' and 'double' in declaration specifiers
double unsigned doubleUnsigned; // error: both 'unsigned' and 'double' in declaration specifiers
*/

/*
double short doubleShort; // error: both 'short' and 'double' in declaration specifiers
short double Double; // error: both 'short' and 'double' in declaration specifiers

long double longDouble; // error: both 'long' and 'double' in declaration specifiers
double long doubleLong; // error: both 'long' and 'double' in declaration specifiers
*/

int main()
{
    printf("Double Datatype : Size, Value and Address :\n");
    printf("Size : %d[Double] and %d[&Double]\n", sizeof(Double), sizeof(&Double));
    printf("Value : %d[Double]\n", Double);
    printf("Address : %p[&Double]\n", &Double);

    return 0;
}
