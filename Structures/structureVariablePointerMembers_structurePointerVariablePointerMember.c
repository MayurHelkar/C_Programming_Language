#include <stdio.h>

struct datatype
{
    char charVar, *charPtr;
    int intVar, *intPtr;
    float floatVar, *floatPtr;
    double doubleVar, *doublePtr;
} *dT_ptr_G;

struct datatype *dT_Ptr_G;

char Char = 'a';
int Int = 7642;
float Float = 76.21;
double Double = 92.2345;

// struct datatype dT_defineTagName_G = { Char, &Char, Int, &Int, Float, &Float, Double, &Double }; // error: initializer element is not constant
// struct datatype dT_defineTagName_G = { 'r', &.charVar, 8235, &.intVar, 78.2376 &.floatVar, 78.2346, &.doubleVar }; // error: expected expression before '->' token
struct datatype dT_defineTagName_G = { 'r', &dT_defineTagName_G.charVar, 8235, &dT_defineTagName_G.intVar, 78.23, &dT_defineTagName_G.floatVar, 4943.9673, &dT_defineTagName_G.doubleVar };

int main()
{
    printf("Structure-pointer pointing to Structure-variable ::\n");
    printf("dT_ptr_G : %p and dT_Ptr_G : %p\n", dT_ptr_G, dT_Ptr_G);
    printf("dT_ptr_G : %p and &dT_Ptr_G : %p\n", &dT_ptr_G, &dT_Ptr_G);
//    printf("*dT_ptr_G->charVar : %c and *dT_Ptr_G->charVar : %c\n", *dT_ptr_G->charVar, *dT_Ptr_G->charVar);  // error: invalid type argument of unary '*' (have 'int')
//    printf("dT_ptr_G->charVar : %c and dT_Ptr_G->charVar : %c\n", dT_ptr_G->charVar, dT_Ptr_G->charVar);
//    printf("&dT_ptr_G->charVar : %p and &dT_Ptr_G->charVar : %p\n", dT_ptr_G->charVar, dT_Ptr_G->charVar);
    printf("&dT_ptr_G->charVar : %p and &dT_Ptr_G->charVar : %p\n", &dT_ptr_G->charVar, &dT_Ptr_G->charVar);
//    printf("dT_ptr_G->charPtr : %c and dT_Ptr_G->charPtr : %c\n", dT_ptr_G->charPtr, dT_Ptr_G->charPtr);
    printf("&dT_ptr_G->charPtr : %p and &dT_Ptr_G->charPtr : %p\n", &dT_ptr_G->charPtr, &dT_Ptr_G->charPtr);
//    printf("dT_ptr_G->intVar : %d and dT_Ptr_G->intVar : %d\n", dT_ptr_G->intVar, dT_Ptr_G->intVar);
    printf("&dT_ptr_G->intVar : %p and &dT_Ptr_G->intVar : %p\n", &dT_ptr_G->intVar, &dT_Ptr_G->intVar);
//    printf("dT_ptr_G->intPtr : %d and dT_Ptr_G->intPtr : %d\n", dT_ptr_G->intPtr, dT_Ptr_G->intPtr);
    printf("&dT_ptr_G->intPtr : %p and &dT_Ptr_G->intPtr : %p\n", &dT_ptr_G->intPtr, &dT_Ptr_G->intPtr);
//    printf("dT_ptr_G->floatVar : %f and dT_Ptr_G->floatVar : %f\n", dT_ptr_G->floatVar, dT_Ptr_G->floatVar);
    printf("&dT_ptr_G->floatVar : %p and &dT_Ptr_G->floatVar : %p\n", &dT_ptr_G->floatVar, &dT_Ptr_G->floatVar);
//    printf("dT_ptr_G->floatPtr : %f and dT_Ptr_G->floatPtr : %f\n", dT_ptr_G->floatPtr, dT_Ptr_G->floatPtr);
    printf("&dT_ptr_G->floatPtr : %p and &dT_Ptr_G->floatPtr : %p\n", &dT_ptr_G->floatPtr, &dT_Ptr_G->floatPtr);
//    printf("dT_ptr_G->doubleVar : %lf and dT_Ptr_G->doubleVar : %lf\n", dT_ptr_G->doubleVar, dT_Ptr_G->doubleVar);
    printf("&dT_ptr_G->doubleVar : %p and &dT_Ptr_G->doubleVar : %p\n", &dT_ptr_G->doubleVar, &dT_Ptr_G->doubleVar);
//    printf("dT_ptr_G->doublePtr : %lf and dT_Ptr_G->doublePtr : %lf\n", dT_ptr_G->doublePtr, dT_Ptr_G->doublePtr);
    printf("&dT_ptr_G->doublePtr : %p and &dT_Ptr_G->doublePtr : %p\n", &dT_ptr_G->doublePtr, &dT_Ptr_G->doublePtr);
    
    printf("\n");

    dT_ptr_G = &dT_defineTagName_G;
    printf("Structure-pointer pointing to Structure-variable ::\n");
    printf("dT_defineTagName_G : %p and dT_ptr_G : %p\n", dT_defineTagName_G, dT_ptr_G);
    printf("dT_defineTagName_G : %p and &dT_ptr_G : %p\n", &dT_defineTagName_G, &dT_ptr_G);
    printf("dT_defineTagName_G.charVar : %c and dT_ptr_G->charVar : %c\n", dT_defineTagName_G.charVar, dT_ptr_G->charVar);
    printf("&dT_defineTagName_G.charVar : %p and &dT_ptr_G->charVar : %p\n", &dT_defineTagName_G.charVar, &dT_ptr_G->charVar);
    printf("*dT_defineTagName_G.charPtr : %c and *dT_ptr_G->charPtr : %c\n", *dT_defineTagName_G.charPtr, *dT_ptr_G->charPtr);
    printf("dT_defineTagName_G.charPtr : %p and dT_ptr_G->charPtr : %p\n", dT_defineTagName_G.charPtr, dT_ptr_G->charPtr);
    printf("&dT_defineTagName_G.charPtr : %p and &dT_ptr_G->charPtr : %p\n", &dT_defineTagName_G.charPtr, &dT_ptr_G->charPtr);
    printf("dT_defineTagName_G.intVar : %d and dT_ptr_G->intVar : %d\n", dT_defineTagName_G.intVar, dT_ptr_G->intVar);
    printf("&dT_defineTagName_G.intVar : %p and &dT_ptr_G->intVar : %p\n", &dT_defineTagName_G.intVar, &dT_ptr_G->intVar);
    printf("*dT_defineTagName_G.intPtr : %d and *dT_ptr_G->intPtr : %d\n", *dT_defineTagName_G.intPtr, *dT_ptr_G->intPtr);
    printf("dT_defineTagName_G.intPtr : %p and dT_ptr_G->intPtr : %dp\n", dT_defineTagName_G.intPtr, dT_ptr_G->intPtr);
    printf("&dT_defineTagName_G.intPtr : %p and &dT_ptr_G->intPtr : %p\n", &dT_defineTagName_G.intPtr, &dT_ptr_G->intPtr);
    printf("dT_defineTagName_G.floatVar : %f and dT_ptr_G->floatVar : %f\n", dT_defineTagName_G.floatVar, dT_ptr_G->floatVar);
    printf("&dT_defineTagName_G.floatVar : %p and &dT_ptr_G->floatVar : %p\n", &dT_defineTagName_G.floatVar, &dT_ptr_G->floatVar);
    printf("*dT_defineTagName_G.floatPtr : %f and *dT_ptr_G->floatPtr : %f\n", *dT_defineTagName_G.floatPtr, *dT_ptr_G->floatPtr);
    printf("dT_defineTagName_G.floatPtr : %f and dT_ptr_G->floatPtr : %f\n", dT_defineTagName_G.floatPtr, dT_ptr_G->floatPtr);
    printf("&dT_defineTagName_G.floatPtr : %p and &dT_ptr_G->floatPtr : %p\n", &dT_defineTagName_G.floatPtr, &dT_ptr_G->floatPtr);
    printf("dT_defineTagName_G.doubleVar : %lf and dT_ptr_G->doubleVar : %lf\n", dT_defineTagName_G.doubleVar, dT_ptr_G->doubleVar);
    printf("&dT_defineTagName_G.doubleVar : %p and &dT_ptr_G->doubleVar : %p\n", &dT_defineTagName_G.doubleVar, &dT_ptr_G->doubleVar);
    printf("*dT_defineTagName_G.doublePtr : %lf and *dT_ptr_G->doublePtr : %lf\n", *dT_defineTagName_G.doublePtr, *dT_ptr_G->doublePtr);
    printf("dT_defineTagName_G.doublePtr : %lf and dT_ptr_G->doublePtr : %lf\n", dT_defineTagName_G.doublePtr, dT_ptr_G->doublePtr);
    printf("&dT_defineTagName_G.doublePtr : %p and &dT_ptr_G->doublePtr : %p\n", &dT_defineTagName_G.doublePtr, &dT_ptr_G->doublePtr);

    printf("\n");

    dT_Ptr_G = &dT_defineTagName_G;
    printf("Structure-pointer pointing to Structure-variable ::\n");
    printf("dT_defineTagName_G : %p and dT_Ptr_G : %p\n", dT_defineTagName_G, dT_Ptr_G);
    printf("dT_defineTagName_G : %p and &dT_Ptr_G : %p\n", &dT_defineTagName_G, &dT_Ptr_G);
    printf("dT_defineTagName_G.charVar : %c and dT_Ptr_G->charVar : %c\n", dT_defineTagName_G.charVar, dT_Ptr_G->charVar);
    printf("&dT_defineTagName_G.charVar : %p and &dT_Ptr_G->charVar : %p\n", &dT_defineTagName_G.charVar, &dT_Ptr_G->charVar);
    printf("*dT_defineTagName_G.charPtr : %c and *dT_Ptr_G->charPtr : %c\n", *dT_defineTagName_G.charPtr, *dT_Ptr_G->charPtr);
    printf("dT_defineTagName_G.charPtr : %p and dT_Ptr_G->charPtr : %p\n", dT_defineTagName_G.charPtr, dT_Ptr_G->charPtr);
    printf("&dT_defineTagName_G.charPtr : %p and &dT_Ptr_G->charPtr : %p\n", &dT_defineTagName_G.charPtr, &dT_Ptr_G->charPtr);
    printf("dT_defineTagName_G.intVar : %d and dT_Ptr_G->intVar : %d\n", dT_defineTagName_G.intVar, dT_Ptr_G->intVar);
    printf("&dT_defineTagName_G.intVar : %p and &dT_Ptr_G->intVar : %p\n", &dT_defineTagName_G.intVar, &dT_Ptr_G->intVar);
    printf("*dT_defineTagName_G.intPtr : %d and *dT_Ptr_G->intPtr : %d\n", *dT_defineTagName_G.intPtr, *dT_Ptr_G->intPtr);
    printf("dT_defineTagName_G.intPtr : %p and dT_Ptr_G->intPtr : %dp\n", dT_defineTagName_G.intPtr, dT_Ptr_G->intPtr);
    printf("&dT_defineTagName_G.intPtr : %p and &dT_Ptr_G->intPtr : %p\n", &dT_defineTagName_G.intPtr, &dT_Ptr_G->intPtr);
    printf("dT_defineTagName_G.floatVar : %f and dT_Ptr_G->floatVar : %f\n", dT_defineTagName_G.floatVar, dT_Ptr_G->floatVar);
    printf("&dT_defineTagName_G.floatVar : %p and &dT_Ptr_G->floatVar : %p\n", &dT_defineTagName_G.floatVar, &dT_Ptr_G->floatVar);
    printf("*dT_defineTagName_G.floatPtr : %f and *dT_Ptr_G->floatPtr : %f\n", *dT_defineTagName_G.floatPtr, *dT_Ptr_G->floatPtr);
    printf("dT_defineTagName_G.floatPtr : %f and dT_Ptr_G->floatPtr : %f\n", dT_defineTagName_G.floatPtr, dT_Ptr_G->floatPtr);
    printf("&dT_defineTagName_G.floatPtr : %p and &dT_Ptr_G->floatPtr : %p\n", &dT_defineTagName_G.floatPtr, &dT_Ptr_G->floatPtr);
    printf("dT_defineTagName_G.doubleVar : %lf and dT_Ptr_G->doubleVar : %lf\n", dT_defineTagName_G.doubleVar, dT_Ptr_G->doubleVar);
    printf("&dT_defineTagName_G.doubleVar : %p and &dT_Ptr_G->doubleVar : %p\n", &dT_defineTagName_G.doubleVar, &dT_Ptr_G->doubleVar);
    printf("*dT_defineTagName_G.doublePtr : %lf and *dT_Ptr_G->doublePtr : %lf\n", *dT_defineTagName_G.doublePtr, *dT_Ptr_G->doublePtr);
    printf("dT_defineTagName_G.doublePtr : %lf and dT_Ptr_G->doublePtr : %lf\n", dT_defineTagName_G.doublePtr, dT_Ptr_G->doublePtr);
    printf("&dT_defineTagName_G.doublePtr : %p and &dT_Ptr_G->doublePtr : %p\n", &dT_defineTagName_G.doublePtr, &dT_Ptr_G->doublePtr);

    return 0;
}