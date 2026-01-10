#include <stdio.h>

// Global Declaration

extern char Char; // error: file-scope declaration of 'Char' specifies 'extern'

extern char signed charSigned; // error: file-scope declaration of 'charSigned' specifies 'extern'
extern signed char signedChar; // error: file-scope declaration of 'signedChar' specifies 'extern'

extern char unsigned charUnsigned; // error: file-scope declaration of 'charUnsigned' specifies 'extern'
extern unsigned char unsignedChar; // error: file-scope declaration of 'unsignedChar' specifies 'extern'

extern signed Signed; // error: file-scope declaration of 'Signed' specifies 'extern'
extern unsigned Unsigned; // error: file-scope declaration of 'Unsigned' specifies 'extern'

int main()
{
    printf("Global Variables of Signed Character types :\n");

    printf("\n");

    printf("Size of All variables of different Character types :\n");
    printf("Char : %d\n", sizeof(Char));
    printf("charSigned : %d\n", sizeof(charSigned));
    printf("signedChar : %d\n", sizeof(signedChar));
    printf("charUnsigned : %d\n", sizeof(charUnsigned));
    printf("unsignedChar : %d\n", sizeof(unsignedChar));
    printf("Signed : %d\n", sizeof(Signed));
    printf("Unsigned : %d\n", sizeof(Unsigned));

/*
    printf("\n");

    printf("Value of All variables of different Character types :\n");
    printf("Char : %d\n", Char); // undefined reference to `Char'
    printf("charSigned : %d\n", charSigned); // undefined reference to `charSigned'
    printf("signedChar : %d\n", signedChar); // undefined reference to `signedChar'
    printf("charUnsigned : %d\n", charUnsigned); // undefined reference to `charUnsigned'
    printf("unsignedChar : %d\n", unsignedChar); // undefined reference to `unsignedChar'
    printf("Signed : %d\n", Signed); // undefined reference to `Signed'
    printf("Unsigned : %d\n", Unsigned); // undefined reference to `Unsigned'
*/

/*
    printf("\n");

    printf("Address of All variables of different Character types :\n");
    printf("Char : %p\n", &Char); // undefined reference to `Char'
    printf("charSigned : %p\n", &charSigned); // undefined reference to `charSigned'
    printf("signedChar : %p\n", &signedChar); // undefined reference to `signedChar'
    printf("charUnsigned : %p\n", &charUnsigned); // undefined reference to `charUnsigned'
    printf("unsignedChar : %p\n", &unsignedChar); // undefined reference to `unsignedChar'
    printf("Signed : %p\n", &Signed); // undefined reference to `Signed'
    printf("Unsigned : %p\n", &Unsigned); // undefined reference to `Unsigned'
*/
    return 0;
}