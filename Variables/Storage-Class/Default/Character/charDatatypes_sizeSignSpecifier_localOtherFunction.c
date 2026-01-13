#include <stdio.h>

void floatLocalVariableFunction(void);

int main()
{
    floatLocalVariableFunction();

    return 0;
}

void floatLocalVariableFunction(void)
{
    char Char;

    char signed charSigned; // error: both 'signed' and 'char' in declaration specifiers
    signed char signedChar; // error: both 'signed' and 'char' in declaration specifiers

    char unsigned charUnsigned; // error: both 'unsigned' and 'char' in declaration specifiers
    unsigned char unsignedChar; // error: both 'unsigned' and 'char' in declaration specifiers

/*
    char short charShort; // error: both 'short' and 'char' in declaration specifiers
    short char shortChar; // error: both 'short' and 'char' in declaration specifiers

    char long charLong; // error: both 'long' and 'char' in declaration specifiers
    long char longChar; // error: both 'long' and 'char' in declaration specifiers
*/

    printf("Char Datatype : Size, Value and Address :\n");
    printf("Size : %d[Char] and %d[&char]\n", sizeof(Char), sizeof(&Char));
    printf("Value : %d[Char]\n", Char);
    printf("Address : %p[&Char]\n", &Char);

    printf("\n");

    printf("charSigned Datatype : Size, Value and Address :\n");
    printf("Size : %d[charSigned] and %d[&charSigned]\n", sizeof(charSigned), sizeof(&charSigned));
    printf("Value : %d[charSigned]\n", charSigned);
    printf("Address : %p[&charSigned]\n", &charSigned);

    printf("\n");

    printf("signedChar Datatype : Size, Value and Address :\n");
    printf("Size : %d[signedChar] and %d[&signedChar]\n", sizeof(signedChar), sizeof(&signedChar));
    printf("Value : %d[signedChar]\n", signedChar);
    printf("Address : %p[&signedChar]\n", &signedChar);

    printf("\n");

    printf("charUnsigned Datatype : Size, Value and Address :\n");
    printf("Size : %d[charUnsigned] and %d[&charUnsigned]\n", sizeof(charUnsigned), sizeof(&charUnsigned));
    printf("Value : %d[charUnsigned]\n", charUnsigned);
    printf("Address : %p[&charUnsigned]\n", &charUnsigned);

    printf("\n");

    printf("unsignedChar Datatype : Size, Value and Address :\n");
    printf("Size : %d[unsignedChar] and %d[&unsignedChar]\n", sizeof(unsignedChar), sizeof(&unsignedChar));
    printf("Value : %d[unsignedChar]\n", unsignedChar);
    printf("Address : %p[&unsignedChar]\n", &unsignedChar);
    
    return;
}
