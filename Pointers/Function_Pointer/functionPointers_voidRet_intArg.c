#include <stdio.h>

void intAddInt(int, int);
void intSubInt(int, int);
void intMulInt(int, int);
void intDivQuoInt(int, int);
void intDivRemInt(int, int);

void (*intFuncPtrInt)(int, int);


int main()
{
    intFuncPtrInt = *intAddInt;
    intFuncPtrInt = *intSubInt;
    intFuncPtrInt = *intMulInt;
    intFuncPtrInt = *intDivQuoInt;
    intFuncPtrInt = *intDivRemInt;

    printf("\n");

    intFuncPtrInt = intAddInt;
    intFuncPtrInt = intSubInt;
    intFuncPtrInt = intMulInt;
    intFuncPtrInt = intDivQuoInt;
    intFuncPtrInt = intDivRemInt;

    printf("\n");

    intFuncPtrInt = &intAddInt;
    intFuncPtrInt = &intSubInt;
    intFuncPtrInt = &intMulInt;
    intFuncPtrInt = &intDivQuoInt;
    intFuncPtrInt = &intDivRemInt;

    return 0;
}

void intAddInt(int a, int b)
{
    printf("Addition : %d\n", a + b);
}

void intSubInt(int a, int b)
{
    printf("Subtraction : %d\n", a - b);
}

void intMulInt(int a, int b)
{
    printf("Multiplication : %d\n", a * b);
}

void intDivQuoInt(int a, int b)
{
    printf("Division-Quotient : %d\n", a / b);
}

void intDivRemInt(int a, int b)
{
    printf("Division-Remainder : %d\n", a % b);
}