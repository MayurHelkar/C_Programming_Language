#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int *ptr = *(int *)malloc(sizeof(int)); //     *ptr = returnZero;  // error: assignment to 'int' from 'int (*)(void)' makes integer from pointer without a cast [-Wint-conversion]
    int *ptr = (int *)malloc(sizeof(int));

    printf("*ptr : %u, ptr : %p and &ptr : %p\n", *ptr, ptr, &ptr);
    printf("\n");

    free(ptr);
    printf("*ptr : %u, ptr : %p and &ptr : %p\n", *ptr, ptr, &ptr);
    printf("\n");

    ptr = NULL;
//    printf("*ptr : %u, ptr : %p and &ptr : %p\n", *ptr, ptr, &ptr);
    printf("ptr : %p and &ptr : %p\n", ptr, &ptr);
    return 0;
}