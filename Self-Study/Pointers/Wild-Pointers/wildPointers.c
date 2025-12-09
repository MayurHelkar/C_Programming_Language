#include <stdio.h>

int main()
{
    int *intPtr;
    printf("*intPtr : %d, intPtr : %p and &intPtr : %p\n", *intPtr, intPtr, &intPtr);
    
    return 0;
}