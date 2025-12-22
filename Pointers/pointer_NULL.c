#define ZERO 0

#include<stdio.h>

int main()
{
    char charVar = 77, *charPtr;
    int intVar = 84563, *intPtr;
    float floatVar = 67.232556, *floatPtr;
    double doubleVar = 67.232556, *doublePtr;

    printf("All Primary datatype pointers without pointing to another variables : Only declaration not Initialized ::\n");
/*
    printf("*charPtr : %c, charPtr : %p and &charPtr : %p\n", *charPtr, charPtr, &charPtr);
    printf("*intPtr : %d, intPtr : %p and &intPtr : %p\n", *intPtr, intPtr, &intPtr);
    printf("*floatPtr : %f, floatPtr : %p and &floatPtr : %p\n", *floatPtr, floatPtr, &floatPtr);
    printf("*doublePtr : %lf, doublePtr : %p and &doublePtr : %p\n", *doublePtr, doublePtr, &doublePtr);

    printf("charPtr : %p and &charPtr : %p\n", charPtr, &charPtr);
    printf("intPtr : %d and &intPtr : %p\n", intPtr, &intPtr);
    printf("floatPtr : %f and &floatPtr : %p\n", floatPtr, &floatPtr);
    printf("doublePtr : %lf and &doublePtr : %p\n", doublePtr, &doublePtr);

*/
    printf("&charPtr : %p, ", &charPtr);
    printf("&intPtr : %p,", &intPtr);
    printf("&floatPtr : %p and ", &floatPtr);
    printf("&doublePtr : %p\n", &doublePtr);

    printf("\n");

    printf("Pointer after assigned variable NULL :\n");
//    charPtr = intPtr = floatPtr = doublePtr = NULL; // error: cannot convert 'double*' to 'float*' in assignment
    charPtr = NULL, intPtr = NULL, floatPtr = NULL, doublePtr = NULL;
/*
    printf("*charPtr : %c, charPtr : %p and &charPtr : %p\n", *charPtr, charPtr, &charPtr);
    printf("*intPtr : %d, intPtr : %p and &intPtr : %p\n", *intPtr, intPtr, &intPtr);
    printf("*floatPtr : %f, floatPtr : %p and &floatPtr : %p\n", *floatPtr, floatPtr, &floatPtr);
    printf("*doublePtr : %lf, doublePtr : %p and &doublePtr : %p\n", *doublePtr, doublePtr, &doublePtr);
*/
    printf("charPtr : %p and &charPtr : %p\n", charPtr, &charPtr);
    printf("intPtr : %d and &intPtr : %p\n", intPtr, &intPtr);
    printf("floatPtr : %f and &floatPtr : %p\n", floatPtr, &floatPtr);
    printf("doublePtr : %lf and &doublePtr : %p\n", doublePtr, &doublePtr);

    printf("\n");

    printf("Pointer after assigned another Variable :\n");
    charPtr = &charVar, intPtr = &intVar, floatPtr = &floatVar, doublePtr = &doubleVar;
    printf("*charPtr : %c, charPtr : %p and &charPtr : %p\n", *charPtr, charPtr, &charPtr);
    printf("*intPtr : %d, intPtr : %p and &intPtr : %p\n", *intPtr, intPtr, &intPtr);
    printf("*floatPtr : %f, floatPtr : %p and &floatPtr : %p\n", *floatPtr, floatPtr, &floatPtr);
    printf("*doublePtr : %lf, doublePtr : %p and &doublePtr : %p\n", *doublePtr, doublePtr, &doublePtr);

    printf("\n");

    printf("Pointer after assigned to Zero :\n");
    charPtr = ZERO, intPtr = ZERO, floatPtr = ZERO, doublePtr = ZERO;
/*
    printf("*charPtr : %c, charPtr : %p and &charPtr : %p\n", *charPtr, charPtr, &charPtr);
    printf("*intPtr : %d, intPtr : %p and &intPtr : %p\n", *intPtr, intPtr, &intPtr);
    printf("*floatPtr : %f, floatPtr : %p and &floatPtr : %p\n", *floatPtr, floatPtr, &floatPtr);
    printf("*doublePtr : %lf, doublePtr : %p and &doublePtr : %p\n", *doublePtr, doublePtr, &doublePtr);
*/        
    printf("charPtr : %p and &charPtr : %p\n", charPtr, &charPtr);
    printf("intPtr : %d and &intPtr : %p\n", intPtr, &intPtr);
    printf("floatPtr : %f and &floatPtr : %p\n", floatPtr, &floatPtr);
    printf("doublePtr : %lf and &doublePtr : %p\n", doublePtr, &doublePtr);

    printf("\n");

    printf("Pointer after assigned to Define ZERO :\n");
    charPtr = 0, intPtr = 0, floatPtr = 0, doublePtr = 0;
    printf("charPtr : %p and &charPtr : %p\n", charPtr, &charPtr);
    printf("intPtr : %d and &intPtr : %p\n", intPtr, &intPtr);
    printf("floatPtr : %f and &floatPtr : %p\n", floatPtr, &floatPtr);
    printf("doublePtr : %lf and &doublePtr : %p\n", doublePtr, &doublePtr);

    return 0;
}