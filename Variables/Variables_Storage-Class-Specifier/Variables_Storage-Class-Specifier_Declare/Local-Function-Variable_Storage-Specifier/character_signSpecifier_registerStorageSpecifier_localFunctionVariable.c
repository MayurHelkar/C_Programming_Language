#include <stdio.h>

void characterRegister(void);

int main()
{
    characterRegister();

    return 0;
}

void characterRegister(void)
{
    // Local Declaration
    register char Char;

    register char signed charSigned;
    register signed char signedChar;

    register char unsigned charUnsigned;
    register unsigned char unsignedChar;

    register signed Signed;
    register unsigned Unsigned;
    
    printf("Local Variables of Signed Character types :\n");

    printf("\n");
    
    printf("Size of All variables of different Character types :\n");
    printf("Char : %d\n", sizeof(Char));
    printf("charSigned : %d\n", sizeof(charSigned));
    printf("signedChar : %d\n", sizeof(signedChar));
    printf("charUnsigned : %d\n", sizeof(charUnsigned));
    printf("unsignedChar : %d\n", sizeof(unsignedChar));
    printf("Signed : %d\n", sizeof(Signed));
    printf("Unsigned : %d\n", sizeof(Unsigned));

    printf("\n");

    printf("Value of All variables of different Character types :\n");
    printf("Char : %d\n", Char);
    printf("charSigned : %d\n", charSigned);
    printf("signedChar : %d\n", signedChar);
    printf("charUnsigned : %d\n", charUnsigned);
    printf("unsignedChar : %d\n", unsignedChar);
    printf("Signed : %d\n", Signed);
    printf("Unsigned : %d\n", Unsigned);

/*
    printf("\n");

    printf("Address of All variables of different Character types :\n");
    printf("Char : %p\n", &Char); // error: address of register variable 'Char' requested
    printf("charSigned : %p\n", &charSigned); // error: address of register variable 'charSigned' requested
    printf("signedChar : %p\n", &signedChar); // error: address of register variable 'signedChar' requested
    printf("charUnsigned : %p\n", &charUnsigned); // error: address of register variable 'charUnsigned' requested
    printf("unsignedChar : %p\n", &unsignedChar); // error: address of register variable 'unsignedChar' requested
    printf("Signed : %p\n", &Signed); // error: address of register variable 'Signed' requested
    printf("Unsigned : %p\n", &Unsigned); // error: address of register variable 'Unsigned' requested
*/

    return;
}