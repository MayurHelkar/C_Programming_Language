#include <stdio.h>

void voidAddInt(int, int);
void voidSubInt(int, int);
void voidMulInt(int, int);
void voidDivQuoInt(int, int);
void voidDivRemInt(int, int);

void (*voidFuncPtrInt)(int, int);


int main()
{
    voidFuncPtrInt = *voidAddInt;       voidFuncPtrInt(10, 4);
    voidFuncPtrInt = *voidSubInt;       voidFuncPtrInt(10, 4);
    voidFuncPtrInt = *voidMulInt;       voidFuncPtrInt(10, 4);
    voidFuncPtrInt = *voidDivQuoInt;    voidFuncPtrInt(10, 4);
    voidFuncPtrInt = *voidDivRemInt;    voidFuncPtrInt(10, 4);

    printf("\n");

    voidFuncPtrInt = voidAddInt;        voidFuncPtrInt(10, 4);
    voidFuncPtrInt = voidSubInt;        voidFuncPtrInt(10, 4);
    voidFuncPtrInt = voidMulInt;        voidFuncPtrInt(10, 4);
    voidFuncPtrInt = voidDivQuoInt;     voidFuncPtrInt(10, 4);
    voidFuncPtrInt = voidDivRemInt;     voidFuncPtrInt(10, 4);

    printf("\n");

    voidFuncPtrInt = &voidAddInt;       voidFuncPtrInt(10, 4);
    voidFuncPtrInt = &voidSubInt;       voidFuncPtrInt(10, 4);
    voidFuncPtrInt = &voidMulInt;       voidFuncPtrInt(10, 4);
    voidFuncPtrInt = &voidDivQuoInt;    voidFuncPtrInt(10, 4);
    voidFuncPtrInt = &voidDivRemInt;    voidFuncPtrInt(10, 4);

    return 0;
}

void voidAddInt(int a, int b)
{
    printf("Addition : %d\n", a + b);
    return;
}

void voidSubInt(int a, int b)
{
    printf("Subtraction : %d\n", a - b);
    return;
}

void voidMulInt(int a, int b)
{
    printf("Multiplication : %d\n", a * b);
    return;
}

void voidDivQuoInt(int a, int b)
{
    printf("Division-Quotient : %d\n", a / b);
    return;
}

void voidDivRemInt(int a, int b)
{
    printf("Division-Remainder : %d\n", a % b);
    return;
}