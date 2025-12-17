/*
Program to display Pre and Post Increment and Decrement operator working

Increment and Decrement opertions require 2 steps - Increment/Decrement and Assign

Increment "++" :: 
Pre : ++value, First increment then assign value
Post : value++, First assign then increment

Decrement "--" :: 
Pre : --value, First increment then assign value
Post : value--, First assign then increment
*/


#include <stdio.h>

int x = 0;              int y = 0;

int main()
{
    int a = ++x;        int b = --y;
    printf("First operation : Increment\n");
    printf("Second operation : Assign\n");
    printf("x : %d and y : %d\ta : %d and b : %d\n", x, y, a, b);

    printf("\n");
    
    x = 0;              y = 0;
    a = x++;            b = y++;
    printf("First operation : Assign\n");
    printf("Second operation : Increment\n");
    printf("x : %d and y : %d\t\ta : %d and b : %d\n", x, y, a, b);

    return 0;
}