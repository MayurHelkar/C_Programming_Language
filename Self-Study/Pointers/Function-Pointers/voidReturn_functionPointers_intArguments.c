#include <stdio.h>

void addFunction(int a, int b)
{
    printf("Addition : %d\n", a + b);
    return;
}

void subFunction(int a, int b)
{
    printf("Subtraction : %d\n", a - b);
    return;
}

void mulFunction(int a, int b)
{
    printf("Multiplication : %d\n", a * b);
    return;
}

void quoFunction(int a, int b)
{
    printf("Quotient : %d\n", a / b);
    return;
}

void modFunction(int a, int b)
{
    printf("Modulus : %d\n", a % b);
    return;
}

void (*functionPtr)(int, int);

int main()
{
    int a = 10, b = 2;

    functionPtr = addFunction;
    functionPtr(a, b);

    functionPtr = subFunction;
    functionPtr(a, b);

    functionPtr = mulFunction;
    functionPtr(a, b);

    functionPtr = quoFunction;
    functionPtr(a, b);

    functionPtr = modFunction;
    functionPtr(a, b);

    return 0;
}