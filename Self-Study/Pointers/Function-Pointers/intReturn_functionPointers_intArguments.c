#include <stdio.h>

int addFunction(int a, int b)
{
    return a + b;
}

int subFunction(int a, int b)
{
    return a - b;
}

int mulFunction(int a, int b)
{
    return a * b;
}

int quoFunction(int a, int b)
{
    return a / b;
}

int modFunction(int a, int b)
{
    return a % b;
}

int (*functionPtr)(int, int);

int main()
{
    functionPtr = addFunction;
    printf("Addition : %d\n", functionPtr(10, 2));

    functionPtr = subFunction;
    printf("Subtraction : %d\n", functionPtr(10, 2));

    functionPtr = mulFunction;
    printf("Multiplication : %d\n", functionPtr(10, 2));

    functionPtr = quoFunction;
    printf("Quotient : %d\n", functionPtr(10, 2));

    functionPtr = modFunction;
    printf("Modulus : %d\n", functionPtr(10, 2));

    return 0;
}