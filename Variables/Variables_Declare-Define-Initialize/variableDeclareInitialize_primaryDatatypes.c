#include <stdio.h>

// Global variables - Declaration
char charVar_G;     
// charVar_G = 65;      // error: type defaults to 'int' in declaration of 'charVar_G' [-Wimplicit-int]
                        // error: conflicting types for 'charVar_G'; have 'int'
int intVar_G;       
// intVar_G = 7545;    // error: type defaults to 'int' in declaration of 'intVar_G' [-Wimplicit-int]
float floatvar_G;       
// floatvar_G = 65.38; // error: type defaults to 'int' in declaration of 'floatvar_G' [-Wimplicit-int]
                    // error: conflicting types for 'floatvar_G'; have 'int'
double doubleVar_G; 
// doubleVar_G = 763.354765;   // error: type defaults to 'int' in declaration of 'doubleVar_G' [-Wimplicit-int]
                            // error: conflicting types for 'doubleVar_G'; have 'int'
int main()
{
//    Local variables - Declaration and Initialize
    char charVar_L;     charVar_L = 98;
    int intVar_L;       intVar_L = 83453;
    float floatvar_L;   floatvar_L = 36.61;
    double doubleVar_L; doubleVar_L = 8612.8652;

//    Global variables - Initialize
    charVar_G = 65; 
    intVar_G = 7545; 
    floatvar_G = 65.38;
    doubleVar_G = 763.354765;

    printf("Sizes of all Variables ::\n");
    printf("charVar_G : %d\n", sizeof(charVar_G));
    printf("charVar_G : %d\n", sizeof(charVar_G));
    printf("intVar_G : %d\n", sizeof(intVar_G));
    printf("intVar_L : %d\n", sizeof(intVar_L));
    printf("floatvar_G : %d\n", sizeof(floatvar_G));
    printf("floatvar_L : %d\n", sizeof(floatvar_L));
    printf("doubleVar_G : %d\n", sizeof(doubleVar_G));
    printf("doubleVar_L : %d\n", sizeof(doubleVar_L));

    printf("\n");

    printf("Initial values of Global Variables ::\n");
    printf("charVar_G : %c\n", charVar_G);
    printf("intVar_G : %d\n", intVar_G);
    printf("floatvar_G : %f\n", floatvar_G);
    printf("doubleVar_G : %lf\n", doubleVar_G);

    printf("\n");

    printf("Initial values of Local Variables ::\n");
    printf("charVar_L : %c\n", charVar_L);
    printf("intVar_L : %d\n", intVar_L);
    printf("floatvar_L : %f\n", floatvar_L);
    printf("doubleVar_L : %lf\n", doubleVar_L);

    printf("\n");

    printf("Address of Global Variables ::\n");
    printf("&charVar_G : %p\n", &charVar_G);
    printf("&intVar_G : %p\n", &intVar_G);
    printf("&floatvar_G : %p\n", &floatvar_G);
    printf("&doubleVar_G : %p\n", &doubleVar_G);

    printf("\n");

    printf("Address of Local Variables ::\n");
    printf("&charVar_L : %p\n", &charVar_L);
    printf("&intVar_L : %p\n", &intVar_L);
    printf("&floatvar_L : %p\n", &floatvar_L);
    printf("&doubleVar_L : %p\n", &doubleVar_L);

    return 0;
}