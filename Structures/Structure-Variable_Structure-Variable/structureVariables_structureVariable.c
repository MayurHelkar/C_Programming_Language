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
    printf("Structure-variable pointing to Structure-variable ::\n");
    printf("dT_declare_G : %p and dT_declareTagname_G : %p\n", dT_declare_G, dT_declareTagname_G);
    printf("dT_declare_G : %p and &dT_declareTagname_G : %p\n", &dT_declare_G, &dT_declareTagname_G);
    printf("dT_declare_G.charVar : %c and dT_declareTagname_G.charVar : %c\n", dT_declare_G.charVar, dT_declareTagname_G.charVar);
    printf("&dT_declare_G.charVar : %p and &dT_declareTagname_G.charVar : %p\n", &dT_declare_G.charVar, &dT_declareTagname_G.charVar);
    printf("dT_declare_G.intVar : %d and dT_declareTagname_G.intVar : %d\n", dT_declare_G.intVar, dT_declareTagname_G.intVar);
    printf("&dT_declare_G.intVar : %p and &dT_declareTagname_G.intVar : %p\n", &dT_declare_G.intVar, &dT_declareTagname_G.intVar);
    printf("dT_declare_G.floatVar : %f and dT_declareTagname_G.floatVar : %f\n", dT_declare_G.floatVar, dT_declareTagname_G.floatVar);
    printf("&dT_declare_G.floatVar : %p and &dT_declareTagname_G.floatVar : %p\n", &dT_declare_G.floatVar, &dT_declareTagname_G.floatVar);
    printf("dT_declare_G.doubleVar : %lf and dT_declareTagname_G.doubleVar : %lf\n", dT_declare_G.doubleVar, dT_declareTagname_G.doubleVar);
    printf("&dT_declare_G.doubleVar : %p and &dT_declareTagname_G.doubleVar : %p\n", &dT_declare_G.doubleVar, &dT_declareTagname_G.doubleVar);

    printf("\n");

    dT_declare_G = dT_defineTagname_G;
    printf("Structure-variable pointing to Structure-variable ::\n");
    printf("dT_declare_G : %p and dT_defineTagname_G : %p\n", dT_declare_G, dT_defineTagname_G);
    printf("dT_declare_G : %p and &dT_defineTagname_G : %p\n", &dT_declare_G, &dT_defineTagname_G);
    printf("dT_declare_G.charVar : %c and dT_defineTagname_G.charVar : %c\n", dT_declare_G.charVar, dT_defineTagname_G.charVar);
    printf("&dT_declare_G.charVar : %p and &dT_defineTagname_G.charVar : %p\n", &dT_declare_G.charVar, &dT_defineTagname_G.charVar);
    printf("dT_declare_G.intVar : %d and dT_defineTagname_G.intVar : %d\n", dT_declare_G.intVar, dT_defineTagname_G.intVar);
    printf("&dT_declare_G.intVar : %p and &dT_defineTagname_G.intVar : %p\n", &dT_declare_G.intVar, &dT_defineTagname_G.intVar);
    printf("dT_declare_G.floatVar : %f and dT_defineTagname_G.floatVar : %f\n", dT_declare_G.floatVar, dT_defineTagname_G.floatVar);
    printf("&dT_declare_G.floatVar : %p and &dT_defineTagname_G.floatVar : %p\n", &dT_declare_G.floatVar, &dT_defineTagname_G.floatVar);
    printf("dT_declare_G.doubleVar : %lf and dT_defineTagname_G.doubleVar : %lf\n", dT_declare_G.doubleVar, dT_defineTagname_G.doubleVar);
    printf("&dT_declare_G.doubleVar : %p and &dT_defineTagname_G.doubleVar : %p\n", &dT_declare_G.doubleVar, &dT_defineTagname_G.doubleVar);

    printf("\n");

    dT_declareTagname_G = dT_defineTagname_G;
    printf("Structure-variable pointing to Structure-variable ::\n");
    printf("dT_declareTagname_G : %p and dT_defineTagname_G : %p\n", dT_declareTagname_G, dT_defineTagname_G);
    printf("dT_declareTagname_G : %p and &dT_defineTagname_G : %p\n", &dT_declareTagname_G, &dT_defineTagname_G);
    printf("dT_declareTagname_G.charVar : %c and dT_defineTagname_G.charVar : %c\n", dT_declareTagname_G.charVar, dT_defineTagname_G.charVar);
    printf("&dT_declareTagname_G.charVar : %p and &dT_defineTagname_G.charVar : %p\n", &dT_declareTagname_G.charVar, &dT_defineTagname_G.charVar);
    printf("dT_declareTagname_G.intVar : %d and dT_defineTagname_G.intVar : %d\n", dT_declareTagname_G.intVar, dT_defineTagname_G.intVar);
    printf("&dT_declareTagname_G.intVar : %p and &dT_defineTagname_G.intVar : %p\n", &dT_declareTagname_G.intVar, &dT_defineTagname_G.intVar);
    printf("dT_declareTagname_G.floatVar : %f and dT_defineTagname_G.floatVar : %f\n", dT_declareTagname_G.floatVar, dT_defineTagname_G.floatVar);
    printf("&dT_declareTagname_G.floatVar : %p and &dT_defineTagname_G.floatVar : %p\n", &dT_declareTagname_G.floatVar, &dT_defineTagname_G.floatVar);
    printf("dT_declareTagname_G.doubleVar : %lf and dT_defineTagname_G.doubleVar : %lf\n", dT_declareTagname_G.doubleVar, dT_defineTagname_G.doubleVar);
    printf("&dT_declareTagname_G.doubleVar : %p and &dT_defineTagname_G.doubleVar : %p\n", &dT_declareTagname_G.doubleVar, &dT_defineTagname_G.doubleVar);

    return 0;
}