#include <stdio.h>

int x = 0;
int y = 0;

int main()
{
    int a = ++x;
    int b = --y;

    printf("x : %d and y : %d\ta : %d and b : %d\n", x, y, a, b);

    x = 0, y = 0;
    a = x++, b = y++;
    printf("x : %d and y : %d\t\ta : %d and b : %d\n", x, y, a, b);

    return 0;
}