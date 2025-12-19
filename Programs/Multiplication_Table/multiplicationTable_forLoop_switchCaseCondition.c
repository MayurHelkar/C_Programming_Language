#include <stdio.h>

int main()
{
    int Number;
    int loop = 1;

    printf("Number to print Multiplication Table : ");
    scanf("%d", &Number);

    printf("%d Multiplication table ::\n", Number);
    for(;loop < 11; loop++)
    {
        switch(Number)
        {
            case 1:
            {
                printf("%d * %d = %d\n", Number, loop, loop);
                break;
            }
            case 2:
            {
                printf("%d * %d = %d\n", Number, loop, loop << 1);
                break;
            }
            case 3:
            {
                printf("%d * %d = %d\n", Number, loop, (loop << 1) + loop);
                break;
            }
            case 4:
            {
                printf("%d * %d = %d\n", Number, loop, (loop << 2));
                break;
            }
            case 5:
            {
                printf("%d * %d = %d\n", Number, loop, (loop << 2) + loop);
                break;
            }
            case 6:
            {
                printf("%d * %d = %d\n", Number, loop, (loop << 2) + (loop << 1));
                break;
            }
            case 7:
            {
                printf("%d * %d = %d\n", Number, loop, (loop << 2) + (loop << 1) + loop);
                break;
            }
            case 8:
            {
                printf("%d * %d = %d\n", Number, loop, loop << 3);
                break;
            }
            case 9:
            {
                printf("%d * %d = %d\n", Number, loop, (loop << 3) + loop);
                break;
            }
            case 10:
            {
                printf("%d * %d = %d\n", Number, loop, (loop << 3) + (loop << 1));
                break;
            }
        }
    }

    return 0;
}