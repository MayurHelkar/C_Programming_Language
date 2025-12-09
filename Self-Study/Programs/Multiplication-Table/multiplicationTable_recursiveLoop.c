#include <stdio.h>

void multiplicationTable_recursive(int , int);


int main()
{
    int Num, I = 1;

    printf("Enter a Number to print it's Multiplication Table : ");
    scanf("%d", &Num);

    multiplicationTable_recursive(Num, I);

    return 0;
}

void multiplicationTable_recursive(int num, int i)
{
    if (i == 11)
    {
        return;
    }
    printf("%d * %d = %d\n", num, i, num * i);
    i++;

    multiplicationTable_recursive(num, i);

    return;
}