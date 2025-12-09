#include <stdio.h>

int main()
{
    char Char = 'D';
    int Int = 9863;
    float Float = 14.656;
    double Double = 76.2345;

    void *voidPtr;

//    printf("*voidPtr : %d, voidPtr : %p and voidPtr : %p\n", *voidPtr, voidPtr, &voidPtr);  // error: invalid use of void expression
    printf("voidPtr : %p and voidPtr : %p\n", voidPtr, &voidPtr);
    printf("\n");

    voidPtr = &Char;
    printf("voidPtr = &Char;\n");
//    printf("*voidPtr : %c, voidPtr : %p and voidPtr : %p\n", voidPtr, voidPtr, &voidPtr);
    printf("*voidPtr : %c, voidPtr : %p and voidPtr : %p\n", *(char *)voidPtr, voidPtr, &voidPtr);
    printf("\n");

    voidPtr = &Int;
    printf("voidPtr = &Int;\n");
//    printf("*voidPtr : %d, voidPtr : %p and voidPtr : %p\n", voidPtr, voidPtr, &voidPtr);
    printf("*voidPtr : %d, voidPtr : %p and voidPtr : %p\n", *(int *)voidPtr, voidPtr, &voidPtr);
    printf("\n");

    voidPtr = &Float;
    printf("voidPtr = &Float;\n");
//    printf("*voidPtr : %f, voidPtr : %p and voidPtr : %p\n", voidPtr, voidPtr, &voidPtr);
    printf("*voidPtr : %f, voidPtr : %p and voidPtr : %p\n", *(float *)voidPtr, voidPtr, &voidPtr);
    printf("\n");

    voidPtr = &Double;
    printf("voidPtr = &Double;\n");
//    printf("*voidPtr : %lf, voidPtr : %p and voidPtr : %p\n", voidPtr, voidPtr, &voidPtr);
    printf("*voidPtr : %lf, voidPtr : %p and voidPtr : %p\n", *(double *)voidPtr, voidPtr, &voidPtr);

    return 0;
}