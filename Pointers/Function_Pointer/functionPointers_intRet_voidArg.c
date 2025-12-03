#include <stdio.h>

int intAddvoid(void);
int intSubvoid(void);
int intMulvoid(void);
int intDivQuovoid(void);
int intDivRemvoid(void);

int (*intFuncPtrvoid)(void);


int main()
{

    intFuncPtrvoid = *intAddvoid;       printf("Addition : %d\n", intAddvoid());
    intFuncPtrvoid = *intSubvoid;       printf("Subtraction : %d\n", intSubvoid());
    intFuncPtrvoid = *intMulvoid;       printf("Multiplication : %d\n", intMulvoid());
    intFuncPtrvoid = *intDivQuovoid;    printf("Division-Quotient : %d\n", intDivQuovoid());
    intFuncPtrvoid = *intDivRemvoid;    printf("Division-Remainder : %d\n", intDivRemvoid());

    printf("\n");

    intFuncPtrvoid = intAddvoid;        printf("Addition : %d\n", intAddvoid());
    intFuncPtrvoid = intSubvoid;        printf("Subtraction : %d\n", intSubvoid());
    intFuncPtrvoid = intMulvoid;        printf("Multiplication : %d\n", intMulvoid());
    intFuncPtrvoid = intDivQuovoid;     printf("Division-Quotient : %d\n", intDivQuovoid());
    intFuncPtrvoid = intDivRemvoid;     printf("Division-Remainder : %d\n", intDivRemvoid());

    printf("\n");

    intFuncPtrvoid = &intAddvoid;       printf("Addition : %d\n", intAddvoid());
    intFuncPtrvoid = &intSubvoid;       printf("Subtraction : %d\n", intSubvoid());
    intFuncPtrvoid = &intMulvoid;       printf("Multiplication : %d\n", intMulvoid());
    intFuncPtrvoid = &intDivQuovoid;    printf("Division-Quotient : %d\n", intDivQuovoid());
    intFuncPtrvoid = &intDivRemvoid;    printf("Division-Remainder : %d\n", intDivRemvoid());

    return 0;
}

int intAddvoid(void)
{
    int a = 10;
    int b = 4;
    return a + b;
}

int intSubvoid(void)
{
    int a = 10;
    int b = 4;
    return a - b;
}

int intMulvoid(void)
{
    int a = 10;
    int b = 4;
    return a * b;
}

int intDivQuovoid(void)
{
    int a = 10;
    int b = 4;
    return a / b;
}

int intDivRemvoid(void)
{
    int a = 10;
    int b = 4;
    return a % b;
}