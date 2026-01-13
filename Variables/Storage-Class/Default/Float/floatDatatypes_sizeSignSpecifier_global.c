#include <stdio.h>

float Float;

/*
signed float signedFloat; // error: both 'signed' and 'float' in declaration specifiers
float signed floatSigned; // error: both 'signed' and 'float' in declaration specifiers

unsigned float unsignedFloat; // error: both 'unsigned' and 'float' in declaration specifiers
float unsigned floatUnsigned; // error: both 'unsigned' and 'float' in declaration specifiers
*/

/*
float short floatShort; // error: both 'short' and 'float' in declaration specifiers
short float shortFloat; // error: both 'short' and 'float' in declaration specifiers

long float longFloat; // error: both 'long' and 'float' in declaration specifiers
float long floatLong; // error: both 'long' and 'float' in declaration specifiers
*/

int main()
{
    printf("Float Datatype : Size, Value and Address :\n");
    printf("Size : %d[Float] and %d[&Float]\n", sizeof(Float), sizeof(&Float));
    printf("Value : %d[Float]\n", Float);
    printf("Address : %p[&Float]\n", &Float);

    return 0;
}
