#include <stdio.h>

#define ZERO 0

enum Sizes{ Zero };

int returnZero(void)
{
    return 0;
}

int main()
{
    int *ptr = NULL;
    printf("ptr = NULL : %p\n", ptr);

    printf("\n");

    ptr = nullptr;
    printf("ptr = nullptr : %p\n", ptr);

    printf("\n");

    ptr = 0;
    printf("ptr = 0 : %p\n", ptr);

    printf("\n");

    ptr = ZERO;
    printf("ptr = ZERO : %p\n", ptr);

    printf("\n");

    ptr = Zero;
    printf("ptr = Zero : %p\n", ptr);

    printf("\n");

    ptr = -0;
    printf("ptr = -0 : %p\n", ptr);

    printf("\n");

//    ptr = returnZero;   // error: assignment to 'int *' from incompatible pointer type 'int (*)(void)' [-Wincompatible-pointer-types]
//    *ptr = returnZero;  // error: assignment to 'int' from 'int (*)(void)' makes integer from pointer without a cast [-Wint-conversion]
//    *ptr = returnZero();    // Exception has occurred. Segmentation fault

    return 0;
}