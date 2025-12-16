#include <stdio.h>

// Global variables - Declaration
char charVar_G;
int intVar_G;
float floatvar_G;
double doubleVar_G;

int main()
{
//    Local variables - Declaration
    char charVar_L;
    int intVar_L;
    float floatvar_L;
    double doubleVar_L;

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