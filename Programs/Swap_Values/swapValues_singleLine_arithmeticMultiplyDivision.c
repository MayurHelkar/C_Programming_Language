#include <stdio.h>

int main()
{
    int a;          int b;
    
    printf("Input 2 values ::\n");
    scanf("%d", &a);                    scanf("%d", &b);

    printf("\n");

    printf("Before Swapping ::\n");
    printf("a : %d\t\t", a);          printf("b : %d\n", b);
    
    a = a * b / (b = a);
    
    printf("\n");

    printf("After Swapping ::\n");
    printf("a : %d\t\t", a);          printf("b : %d\n", b);
    
    return 0;
}