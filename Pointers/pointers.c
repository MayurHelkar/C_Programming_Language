#include <stdio.h>

int main()
{
//    char *charPtr_define = &charVar, charVar = 65; // error: 'charVar' was not declared in this scope; did you mean 'char'?

    char charVar = 65,*charPtr_define = &charVar;
    printf("charVar value defined and charPtr_define address pointed to charVar :\n");
//    printf("charVar : " << charVar << " and &charVar : " << &charVar);
    printf("charVar : %c and &charVar : %p", charVar, &charVar);
//    printf("*charPtr_define : %c, charPtr_define : %d and &charPtr_define : %p", *charPtr_define, charPtr_define, &charPtr_define);
    printf("charPtr_define : %d and &charPtr_define : %p",charPtr_define, &charPtr_define);


    printf("\n");
    
    charVar = 87;
    printf("charVar value changed to direct value :\n");
//    printf("*charPtr_define : %c, charPtr_define : %d and &charPtr_define : %p", *charPtr_define, charPtr_define, &charPtr_define);
    printf("charPtr_define : %d and &charPtr_define : %p",charPtr_define, &charPtr_define);

    printf("\n");
    
    *charPtr_define = 105;
    printf("*charPtr_define pointed to direct value :\n");
//    printf("*charPtr_define : %c, charPtr_define : %d and &charPtr_define : %p", *charPtr_define, charPtr_define, &charPtr_define);
    printf("charPtr_define : %d and &charPtr_define : %p",charPtr_define, &charPtr_define);

    printf("\n");

//    char charVar1 = 117, charPtr_define = &charVar1; // error: conflicting declaration 'char charPtr_define'
    char charVar1 = 117;
    charPtr_define = &charVar1;
    printf("charPtr_define pointed to charVar1 address :\n");
//    printf("*charPtr_define : %c, charPtr_define : %d and &charPtr_define : %p", *charPtr_define, charPtr_define, &charPtr_define);
    printf("charPtr_define : %d and &charPtr_define : %p",charPtr_define, &charPtr_define);
    
    return 0;
}