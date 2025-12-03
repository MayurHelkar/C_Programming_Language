#include <stdio.h>

int main()
{
//    Int int;    // error: 'Int' undeclared (first use in this function); did you mean 'int'?
    int Int;
    int Int1 = 7656;
    int Int2 = 8223;
    int *intPtr;
//    *int ptrInt;    // error: expected expression before 'int'

//    intPtr = Int;   // error: assignment to 'int *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
    intPtr = &Int;

    printf("Int : %d", Int);    printf(" and ");    printf("Int : %p", &Int);    printf("\n");
    printf("*intPtr : %d", *intPtr);    printf(", ");    printf("intPtr : %p", intPtr); printf(" and ");    printf("&intPtr : %p", &intPtr);    printf("\n");

    printf("\n");

    printf("Initialize value to Int :\n");
    Int = 20;
    printf("Int : %d", Int);    printf(" and ");    printf("Int : %pd", &Int);    printf("\n");
    printf("*intPtr : %d", *intPtr);    printf(", ");    printf("intPtr : %p", intPtr); printf(" and ");    printf("&intPtr : %p", &intPtr);    printf("\n");

    printf("\n");

    *intPtr = 345;
    printf("Assigned Another Value to Pointer :\n");
    printf("Int : %d", Int);    printf(" and ");    printf("Int : %pd", &Int);    printf("\n");
    printf("*intPtr : %d", *intPtr);    printf(", ");    printf("intPtr : %p", intPtr); printf(" and ");    printf("&intPtr : %p", &intPtr);    printf("\n");

    printf("\n");

    intPtr = &Int1;
    printf("Assigned Another Variable to Pointer :\n");
    printf("Int : %d", Int);    printf(" and ");    printf("Int : %pd", &Int);    printf("\n");
    printf("Int : %d", Int1);    printf(" and ");    printf("Int1 : %pd", &Int1);    printf("\n");
    printf("*intPtr : %d", *intPtr);    printf(", ");    printf("intPtr : %p", intPtr); printf(" and ");    printf("&intPtr : %p", &intPtr);    printf("\n");

    printf("\n");

    *intPtr = *(&Int2);
    printf("Assigned Another Variable to Pointer :\n");
    printf("Int : %d", Int);    printf(" and ");    printf("Int : %pd", &Int);    printf("\n");
    printf("Int2 : %d", Int2);    printf(" and ");    printf("Int2: %pd", &Int2);    printf("\n");
    printf("*intPtr : %d", *intPtr);    printf(", ");    printf("intPtr : %p", intPtr); printf(" and ");    printf("&intPtr : %p", &intPtr);    printf("\n");

    return 0;
}