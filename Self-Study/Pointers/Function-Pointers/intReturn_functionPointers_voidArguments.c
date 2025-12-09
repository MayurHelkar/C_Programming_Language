#include <stdio.h>

int addFunction(void)
{
    int a = 10, b = 2;
    return a + b;
}

int subFunction(void)
{
    int a = 10, b = 2;
    return a - b;
}

int mulFunction(void)
{
    int a = 10, b = 2;
    return a * b;
}

int quoFunction(void)
{
    int a = 10, b = 2;
    return a / b;
}

int modFunction(void)
{
    int a = 10, b = 2;
    return a % b;
}

int (*functionPtr)(void);

int main()
{
    functionPtr = addFunction;
    printf("Addition : %d\n", functionPtr());

    functionPtr = subFunction;
    printf("Subtraction : %d\n", functionPtr());

    functionPtr = mulFunction;
    printf("Multiplication : %d\n", functionPtr());

    functionPtr = quoFunction;
    printf("Quotient : %d\n", functionPtr());

    functionPtr = modFunction;
    printf("Modulus : %d\n", functionPtr());

    return 0;
}