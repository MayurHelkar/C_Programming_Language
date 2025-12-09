#include <stdio.h>

void addFunction(void)
{
    int a = 10, b = 2;
    printf("Addition : %d\n", a + b);
    return;
}

void subFunction(void)
{
    int a = 10, b = 2;
    printf("Subtraction : %d\n", a - b);
    return;
}

void mulFunction(void)
{
    int a = 10, b = 2;
    printf("Multiplication : %d\n", a * b);
    return;
}

void quoFunction(void)
{
    int a = 10, b = 2;
    printf("Quotient : %d\n", a / b);
    return;
}

void modFunction(void)
{
    int a = 10, b = 2;
    printf("Modulus : %d\n", a % b);
    return;
}

void (*functionPtr)(void);

int main()
{
    functionPtr = addFunction;
    functionPtr();

    functionPtr = subFunction;
    functionPtr();

    functionPtr = mulFunction;
    functionPtr();

    functionPtr = quoFunction;
    functionPtr();

    functionPtr = modFunction;
    functionPtr();

    return 0;
}