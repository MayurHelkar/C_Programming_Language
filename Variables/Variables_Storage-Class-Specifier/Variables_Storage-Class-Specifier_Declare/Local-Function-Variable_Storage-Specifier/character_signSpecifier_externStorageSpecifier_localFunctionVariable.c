#include <stdio.h>

void characterExtern(void);

int main()
{
    characterExtern();
    
    return 0;
}

void characterExtern(void)
{
    // Local Declaration
/*
    extern char Char; // undefined reference to `Char`

    extern char signed charSigned; // undefined reference to `charSigned`
    extern signed char signedChar; // undefined reference to `signedChar`

    extern char unsigned charUnsigned; // undefined reference to `charUnsigned`
    extern unsigned char unsignedChar; // undefined reference to `unsignedChar`

    extern signed Signed; // undefined reference to `Signed`
    extern unsigned Unsigned; // undefined reference to `Unsigned`
*/

/*
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

    printf("\n");

    printf("Address of All variables of different Character types :\n");
    printf("Char : %p\n", &Char);
    printf("charSigned : %p\n", &charSigned);
    printf("signedChar : %p\n", &signedChar);
    printf("charUnsigned : %p\n", &charUnsigned);
    printf("unsignedChar : %p\n", &unsignedChar);
    printf("Signed : %p\n", &Signed);
    printf("Unsigned : %p\n", &Unsigned);
*/
}