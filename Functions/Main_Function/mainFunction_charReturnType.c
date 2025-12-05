#include <stdio.h>

#define RET0 0
#define RET1 1
#define RETChar '\n'

enum Enumeration{ One, Two, Three} Enum;

char main()
{
//    char Char = NULL;   // error: initialization of 'char' from 'void *' makes integer from pointer without a cast [-Wint-conversion]
    char Char = '%';

//    return; // error: 'return' with no value, in function returning non-void [-Wreturn-mismatch]
//    return 0;
//    return RET0;
//    return RET1;
//    return RETChar;
//    return Char;
//    return Char = 69;
//    return Enum;
//    return Enum = Three;
//    return Enum = 833;
}