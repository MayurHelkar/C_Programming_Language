#include <stdio.h>

void voidAddvoid(void);
void voidSubvoid(void);
void voidMulvoid(void);
void voidDivQuovoid(void);
void voidDivRemvoid(void);

void (*voidFuncPtrvoid)(void);


int main()
{
    voidFuncPtrvoid = *voidAddvoid;
    voidFuncPtrvoid = *voidSubvoid;
    voidFuncPtrvoid = *voidMulvoid;
    voidFuncPtrvoid = *voidDivQuovoid;
    voidFuncPtrvoid = *voidDivRemvoid;

    printf("\n");

    voidFuncPtrvoid = voidAddvoid;
    voidFuncPtrvoid = voidSubvoid;
    voidFuncPtrvoid = voidMulvoid;
    voidFuncPtrvoid = voidDivQuovoid;
    voidFuncPtrvoid = voidDivRemvoid;

    printf("\n");

    voidFuncPtrvoid = &voidAddvoid;
    voidFuncPtrvoid = &voidSubvoid;
    voidFuncPtrvoid = &voidMulvoid;
    voidFuncPtrvoid = &voidDivQuovoid;
    voidFuncPtrvoid = &voidDivRemvoid;

    return 0;
}

void voidAddvoid(void)
{
    int a = 10;
    int b = 4;
    printf("Addition : %d\n", a + b);
}

void voidSubvoid(void)
{
    int a = 10;
    int b = 4;
    printf("Subtraction : %d\n", a - b);
}

void voidMulvoid(void)
{
    int a = 10;
    int b = 4;
    printf("Multiplication : %d\n", a * b);
}

void voidDivQuovoid(void)
{
    int a = 10;
    int b = 4;
    printf("Division-Quotient : %d\n", a / b);
}

void voidDivRemvoid(void)
{
    int a = 10;
    int b = 4;
    printf("Division-Remainder : %d\n", a % b);
}