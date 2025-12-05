#include <stdio.h>

main()  // error: return type defaults to 'int' [-Wimplicit-int]
{
//    return; // error: 'return' with no value, in function returning non-void [-Wreturn-mismatch]
    return 0;
}