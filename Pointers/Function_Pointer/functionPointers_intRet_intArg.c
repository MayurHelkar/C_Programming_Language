#include <stdio.h>

int intAddInt(int, int);
int intSubInt(int, int);
int intMulInt(int, int);
int intDivQuoInt(int, int);
int intDivRemInt(int, int);

int (*intFuncPtrInt)(int, int);


int main()
{
    intFuncPtrInt = *intAddInt;      printf("Addition : %d\n", intFuncPtrInt(10, 4));
    intFuncPtrInt = *intSubInt;      printf("Subtraction : %d\n", intFuncPtrInt(10, 4));
    intFuncPtrInt = *intMulInt;      printf("Multiplication : %d\n", intFuncPtrInt(10, 4));
    intFuncPtrInt = *intDivQuoInt;   printf("Division-Quotient : %d\n", intFuncPtrInt(10, 4));
    intFuncPtrInt = *intDivRemInt;   printf("Division-Remainder : %d\n", intFuncPtrInt(10, 4));

    printf("\n");

    intFuncPtrInt = intAddInt;      printf("Addition : %d\n", intFuncPtrInt(10, 4));
    intFuncPtrInt = intSubInt;      printf("Subtraction : %d\n", intFuncPtrInt(10, 4));
    intFuncPtrInt = intMulInt;      printf("Multiplication : %d\n", intFuncPtrInt(10, 4));
    intFuncPtrInt = intDivQuoInt;   printf("Division-Quotient : %d\n", intFuncPtrInt(10, 4));
    intFuncPtrInt = intDivRemInt;   printf("Division-Remainder : %d\n", intFuncPtrInt(10, 4));

    printf("\n");

    intFuncPtrInt = &intAddInt;      printf("Addition : %d\n", intFuncPtrInt(10, 4));
    intFuncPtrInt = &intSubInt;      printf("Subtraction : %d\n", intFuncPtrInt(10, 4));
    intFuncPtrInt = &intMulInt;      printf("Multiplication : %d\n", intFuncPtrInt(10, 4));
    intFuncPtrInt = &intDivQuoInt;   printf("Division-Quotient : %d\n", intFuncPtrInt(10, 4));
    intFuncPtrInt = &intDivRemInt;   printf("Division-Remainder : %d\n", intFuncPtrInt(10, 4));

    return 0;
}

int intAddInt(int a, int b)
{
    return a + b;
}

int intSubInt(int a, int b)
{
    return a - b;
}

int intMulInt(int a, int b)
{
    return a * b;
}

int intDivQuoInt(int a, int b)
{
    return a / b;
}

int intDivRemInt(int a, int b)
{
    return a % b;
}