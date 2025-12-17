#include <stdio.h>

struct datatype
{
    char charVar;
    int intVar;
    float floatVar;
    double doubleVar;
} dT_declare_G;

struct datatype dT_declareTagname_G;
struct datatype dT_defineTagname_G = { 'a', 75442, 87.23, 67.9832 };

int main()
{
    struct datatype *dT_Ptr = &dT_declare_G;

    printf("Structure-pointer pointing to Structure-variable ::\n");
    printf("dT_declare_G : %p and dT_Ptr : %p\n", dT_declare_G, dT_Ptr);
    printf("dT_declare_G : %p and &dT_Ptr : %p\n", &dT_declare_G, &dT_Ptr);
    printf("dT_declare_G.charVar : %c and dT_Ptr->charVar : %c\n", dT_declare_G.charVar, dT_Ptr->charVar);
    printf("&dT_declare_G.charVar : %p and &dT_Ptr->charVar : %p\n", &dT_declare_G.charVar, &dT_Ptr->charVar);
    printf("dT_declare_G.intVar : %d and dT_Ptr->intVar : %d\n", dT_declare_G.intVar, dT_Ptr->intVar);
    printf("&dT_declare_G.intVar : %p and &dT_Ptr->intVar : %p\n", &dT_declare_G.intVar, &dT_Ptr->intVar);
    printf("dT_declare_G.floatVar : %f and dT_Ptr->floatVar : %f\n", dT_declare_G.floatVar, dT_Ptr->floatVar);
    printf("&dT_declare_G.floatVar : %p and &dT_Ptr->floatVar : %p\n", &dT_declare_G.floatVar, &dT_Ptr->floatVar);
    printf("dT_declare_G.doubleVar : %lf and dT_Ptr->doubleVar : %lf\n", dT_declare_G.doubleVar, dT_Ptr->doubleVar);
    printf("&dT_declare_G.doubleVar : %p and &dT_Ptr->doubleVar : %p\n", &dT_declare_G.doubleVar, &dT_Ptr->doubleVar);
//    printf("&&(dT_Ptr->charVar) : %p", &&dT_Ptr->charVar);  // &&(dT_Ptr->charVar)
                                                            // error: label 'dT_Ptr' used but not defined
    printf("\n");

    dT_Ptr = &dT_declareTagname_G;
    printf("Structure-pointer pointing to Structure-variable ::\n");
    printf("dT_declareTagname_G : %p and dT_Ptr : %p\n", dT_declareTagname_G, dT_Ptr);
    printf("&dT_declareTagname_G : %p and &dT_Ptr : %p\n", &dT_declareTagname_G, &dT_Ptr);
    printf("dT_declareTagname_G.charVar : %c and dT_Ptr->charVar : %c\n", dT_declareTagname_G.charVar, dT_Ptr->charVar);
    printf("&dT_declareTagname_G.charVar : %p and &dT_Ptr->charVar : %p\n", &dT_declareTagname_G.charVar, &dT_Ptr->charVar);
    printf("dT_declareTagname_G.intVar : %d and dT_Ptr->intVar : %d\n", dT_declareTagname_G.intVar, dT_Ptr->intVar);
    printf("&dT_declareTagname_G.intVar : %p and &dT_Ptr->intVar : %p\n", &dT_declareTagname_G.intVar, &dT_Ptr->intVar);
    printf("dT_declareTagname_G.floatVar : %f and dT_Ptr->floatVar : %f\n", dT_declareTagname_G.floatVar, dT_Ptr->floatVar);
    printf("&dT_declareTagname_G.floatVar : %p and &dT_Ptr->floatVar : %p\n", &dT_declareTagname_G.floatVar, &dT_Ptr->floatVar);
    printf("dT_declareTagname_G.doubleVar : %lf and dT_Ptr->doubleVar : %lf\n", dT_declareTagname_G.doubleVar, dT_Ptr->doubleVar);
    printf("&dT_declareTagname_G.doubleVar : %p and &dT_Ptr->doubleVar : %p\n", &dT_declareTagname_G.doubleVar, &dT_Ptr->doubleVar);

    printf("\n");

    dT_Ptr = &dT_defineTagname_G;
    printf("Structure-pointer pointing to Structure-variable ::\n");
    printf("dT_defineTagname_G : %p and dT_Ptr : %p\n", dT_defineTagname_G, dT_Ptr);
    printf("&dT_defineTagname_G : %p and &dT_Ptr : %p\n", &dT_defineTagname_G, &dT_Ptr);
    printf("dT_defineTagname_G.charVar : %c and dT_Ptr->charVar : %c\n", dT_defineTagname_G.charVar, dT_Ptr->charVar);
    printf("&dT_defineTagname_G.charVar : %p and &dT_Ptr->charVar : %p\n", &dT_defineTagname_G.charVar, &dT_Ptr->charVar);
    printf("dT_defineTagname_G.intVar : %d and dT_Ptr->intVar : %d\n", dT_defineTagname_G.intVar, dT_Ptr->intVar);
    printf("&dT_defineTagname_G.intVar : %p and &dT_Ptr->intVar : %p\n", &dT_defineTagname_G.intVar, &dT_Ptr->intVar);
    printf("dT_defineTagname_G.floatVar : %f and dT_Ptr->floatVar : %f\n", dT_defineTagname_G.floatVar, dT_Ptr->floatVar);
    printf("&dT_defineTagname_G.floatVar : %p and &dT_Ptr->floatVar : %p\n", &dT_defineTagname_G.floatVar, &dT_Ptr->floatVar);
    printf("dT_defineTagname_G.doubleVar : %lf and dT_Ptr->doubleVar : %lf\n", dT_defineTagname_G.doubleVar, dT_Ptr->doubleVar);
    printf("&dT_defineTagname_G.doubleVar : %p and &dT_Ptr->doubleVar : %p\n", &dT_defineTagname_G.doubleVar, &dT_Ptr->doubleVar);

    return 0;
}