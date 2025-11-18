/*
Structure padding - Adding extra empty bytes in memory to align data properly.
Helps the CPU access data faster by reducing read cycles.
The size of a structure is not always equal to the sum of its members’ sizes 
because of structure padding.

Structure packing - Remove these extra bytes to save memory.
Forces the compiler to store members without gaps.
It can be done using: #pragma pack(1)
__attribute((packed))__
*/

#include <stdio.h>

struct dT1
{
    char Char;
    int Int;
// } dT1_G;
} __attribute__((packed)) dT1_G;

struct dT2
{
    int Int;
    char Char;
// } dT2_G;
} __attribute__((packed)) dT2_G;

int main()
{
    struct dT1 dT1_L;
    struct dT1 dT2_L;

    printf("Structure Sizes ::\n");
    printf("struct dT1 : %d\n", sizeof(struct dT1));
    printf("struct dT2 : %d\n", sizeof(struct dT2));

    printf("\n");

    printf("Structure Variables Sizes ::\n");
    printf("dT1_G : %d\n", sizeof(dT1_G));
    printf("dT2_G : %d\n", sizeof(dT2_G));
    printf("dT1_L : %d\n", sizeof(dT1_L));
    printf("dT2_L : %d\n", sizeof(dT2_L));

    printf("\n");

    printf("Address of Structure Variables ::\n");
    printf("&dT1_G : %p\n", &dT1_G);
    printf("&dT1_G : %p\n", &dT2_G);
    printf("&dT1_L : %p\n", &dT1_L);
    printf("&dT1_L : %p\n", &dT2_L);

    printf("\n");

    printf("Address of Structure Variables ::\n");
    printf("&dT1_G.Char : %p and &dT1_G.Int : %p\n", &dT1_G.Char, &dT1_G.Int);
    printf("&dT2_G.Int : %p and &dT2_G.Char : %p\n", &dT2_G.Int, &dT2_G.Char);
    printf("&dT1_L.Char : %p and &dT1_L.Int : %p\n", &dT1_L.Char, &dT1_L.Int);
    printf("&dT2_L.Int : %p and &dT2_L.Char : %p\n", &dT2_L.Int, &dT2_L.Char);

    return 0;
}