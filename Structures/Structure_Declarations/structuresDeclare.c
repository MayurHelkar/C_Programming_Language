#include <stdio.h>

// struct structuresDeclare_G structuresDeclareVar_G;  // error: storage size of 'structuresDeclareVar_G' isn't known
struct structuresDeclare_G;

void structInsideFunction(void)
{
//    struct structuresDeclare_uF structuresDeclareVar_uF;    // error: storage size of 'structuresDeclareVar_uF' isn't known
    struct structuresDeclare_uF;

    printf("Size of struct structuresDeclare_uF : %d\n", sizeof(struct structuresDeclare_uF)); // error: invalid application of 'sizeof' to incomplete type 'struct structuresDeclare_uF'

    return;
}

int main()
{
//    struct structuresDeclare_mF structuresDeclareVar_mF;    // error: storage size of 'structuresDeclareVar_mF' isn't known
    struct structuresDeclare_mF;

    printf("Size of struct structuresDeclare_mF : %d\n", sizeof(struct structuresDeclare_mF));  // error: invalid application of 'sizeof' to incomplete type 'struct structuresDeclare_mF'
    printf("Size of struct structuresDeclare_G : %d\n", sizeof(struct structuresDeclare_G));    // error: invalid application of 'sizeof' to incomplete type 'struct structuresDeclare_G'

    structInsideFunction();

    return 0;
}