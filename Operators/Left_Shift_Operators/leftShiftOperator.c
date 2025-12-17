#include <stdio.h>

int main()
{
    int A = 0x00;

    int value = 0;
    int position = 0;

    printf("A = %x\n", A);
    printf("A | (value << position\n");

    for(value = 0; value < 10; value++)
    {
        printf("Position : %d and Value : %d\n", position, value);
        for(position = 0; position < 10; position++)
        {
            printf("position : %d\n", position);
            printf("%d | (%d << %d) := %d\n", A, value, position, A | (value << position));
        }
        printf("\n");
    }

    return 0;
}