#include <stdio.h>

void multiplicationTable_forLoop(int);
void multiplicationTable_whileLoop(int);
void multiplicationTable_doWhileLoop(int);

int main()
{
    int Num;

    printf("Enter a Number to print it's Multiplication Table : ");
    scanf("%d", &Num);

    printf("multiplicationTable_forLoop ::\n");
    multiplicationTable_forLoop(Num);

    printf("\n");

    printf("multiplicationTable_whileLoop ::\n");
    multiplicationTable_whileLoop(Num);

    printf("\n");

    printf("multiplicationTable_doWhileLoop ::\n");
    multiplicationTable_doWhileLoop(Num);

    return 0;
}

void multiplicationTable_forLoop(int num)
{
    int loop;

//    for(loop = 0; loop < 11; loop++)
    for(loop = 0; loop < 11; loop++)
    {
        printf("%d * %d = %d\n", num, loop, num * loop);
    }
    return;
}

void multiplicationTable_whileLoop(int num)
{
    int loop = 1;

    while(loop < 11)
    {
        printf("%d * %d = %d\n", num, loop, num * loop);
        loop++;
    }
    return;
}

void multiplicationTable_doWhileLoop(int num)
{
    int loop = 1;

    do
    {
        printf("%d * %d = %d\n", num, loop, num * loop);
        loop++;
    } while (loop < 11);
    
    return;
}