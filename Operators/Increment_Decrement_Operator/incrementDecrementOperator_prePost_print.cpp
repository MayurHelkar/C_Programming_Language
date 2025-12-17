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

int main()
{
    int x = 0;          int y = 0;

    printf("First operation : Increment\n");
    printf("++x : %d\t\t", ++x);
    printf("--y : %d\n", --y);
    printf("Second operation : Assign\n");
    printf("x : %d\t\t", x);
    printf("y : %d\n", y);

    printf("\n");

    x = 0;              y = 0;

    printf("First operation : Assign\n");
    printf("x++ : %d\t\t", x++);
    printf("y-- : %d\n", y--);
    printf("Second operation : Increment\n");
    printf("x : %d\t\t", x);
    printf("y : %d\n", y);
    
    return 0;
}