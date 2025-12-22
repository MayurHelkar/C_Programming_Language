#include<stdio.h>

int main()
{
    void *voidPtr;

    char charVar = 77;
    int intVar = 84563;
    float floatVar = 67.232556;
    double doubleVar = 67.232556;

//    voidPtr = charVar; // error: incompatible types when assigning to type 'void *' from type 'char'
    voidPtr = &charVar;
    printf("voidPtr pointing to charVar variable :\n");
//    printf("*voidPtr :  %c, voidPtr : %p and &voidPtr : %p\n", *voidPtr, voidPtr, &voidPtr); // error: invalid use of void expression
    printf("voidPtr : %p and &voidPtr : %p\n",voidPtr, &voidPtr);

    printf("\n");

//    voidPtr = intVar; // error: incompatible types when assigning to type 'void *' from type 'int'
    voidPtr = &intVar;
    printf("voidPtr pointing to intVar variable :\n");
//    printf("*voidPtr :  %c, voidPtr : %p and &voidPtr : %p\n", *voidPtr, voidPtr, &voidPtr); // error: invalid use of void expression
    printf("voidPtr : %p and &voidPtr : %p\n",voidPtr, &voidPtr);

    printf("\n");

//    voidPtr = floatVar; // error: incompatible types when assigning to type 'void *' from type 'float'
    voidPtr = &floatVar;
    printf("voidPtr pointing to floatVar variable :\n");
//    printf("*voidPtr :  %c, voidPtr : %p and &voidPtr : %p\n", *voidPtr, voidPtr, &voidPtr); // error: invalid use of void expression
    printf("voidPtr : %p and &voidPtr : %p\n",voidPtr, &voidPtr);

    printf("\n");

//    voidPtr = doubleVar; // error: incompatible types when assigning to type 'void *' from type 'double'
    voidPtr = &doubleVar;
    printf("voidPtr pointing to doubleVar variable :\n");
//    printf("*voidPtr :  %c, voidPtr : %p and &voidPtr : %p\n", *voidPtr, voidPtr, &voidPtr); // error: invalid use of void expression
    printf("voidPtr : %p and &voidPtr : %p\n",voidPtr, &voidPtr);
     
    return 0;
}