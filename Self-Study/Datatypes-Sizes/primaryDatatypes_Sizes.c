#include <stdio.h>

int main()
{
    printf("char : %d\n", sizeof(char));
    printf("char signed : %d\n", sizeof(char signed));
    printf("signed char : %d\n", sizeof(signed char));
    printf("char unsigned : %d\n", sizeof(char unsigned));
    printf("unsigned char : %d\n", sizeof(unsigned char));

    printf("\n");

    printf("short : %d\n", sizeof(short));
    printf("long : %d\n", sizeof(long));

    printf("\n");

    printf("signed : %d\n", sizeof(signed));
    printf("unsigned : %d\n", sizeof(unsigned));

    printf("\n");

    printf("short signed : %d\n", sizeof(short signed));
    printf("signed short : %d\n", sizeof(signed short));
    printf("short unsigned : %d\n", sizeof(short unsigned));
    printf("unsigned short : %d\n", sizeof(unsigned short));
    printf("long signed : %d\n", sizeof(long signed));
    printf("signed long : %d\n", sizeof(signed long));
    printf("long unsigned : %d\n", sizeof(long unsigned));
    printf("unsigned long : %d\n", sizeof(unsigned long));

    printf("\n");

    printf("int short : %d\n", sizeof(int short));
    printf("short int : %d\n", sizeof(short int));

    printf("\n");

    printf("int : %d\n", sizeof(int));
    printf("int signed : %d\n", sizeof(int signed));
    printf("signed int : %d\n", sizeof(signed int));
    printf("int unsigned : %d\n", sizeof(int unsigned));
    printf("unsigned int : %d\n", sizeof(unsigned int));

    printf("\n");

    printf("int short signed : %d\n", sizeof(int short signed));
    printf("int signed short : %d\n", sizeof(int signed short));
    printf("signed int short : %d\n", sizeof(signed int short));
    printf("signed short int : %d\n", sizeof(signed short int));
    printf("short int signed : %d\n", sizeof(short int signed));
    printf("short signed int : %d\n", sizeof(short signed int));

    printf("int short unsigned : %d\n", sizeof(int short unsigned));
    printf("int unsigned short : %d\n", sizeof(int unsigned short));
    printf("unsigned int short : %d\n", sizeof(unsigned int short));
    printf("unsigned short int : %d\n", sizeof(unsigned short int));
    printf("short int unsigned : %d\n", sizeof(short int unsigned));
    printf("short unsigned int : %d\n", sizeof(short unsigned int));

    printf("\n");

    printf("long : %d\n", sizeof(long));
    printf("int long : %d\n", sizeof(int long));
    printf("long int : %d\n", sizeof(long int));

    printf("\n");

    printf("int long signed : %d\n", sizeof(int long signed));
    printf("int signed long : %d\n", sizeof(int signed long));
    printf("signed int long : %d\n", sizeof(signed int long));
    printf("signed long int : %d\n", sizeof(signed long int));
    printf("long int signed : %d\n", sizeof(long int signed));
    printf("long signed int : %d\n", sizeof(long signed int));

    printf("int long unsigned : %d\n", sizeof(int long unsigned));
    printf("int unsigned long : %d\n", sizeof(int unsigned long));
    printf("unsigned int long : %d\n", sizeof(unsigned int long));
    printf("unsigned long int : %d\n", sizeof(unsigned long int));
    printf("long int unsigned : %d\n", sizeof(long int unsigned));
    printf("long unsigned int : %d\n", sizeof(long unsigned int));

    printf("\n");

    printf("long long : %d\n", sizeof(long long));
    printf("int long long : %d\n", sizeof(int long long));
    printf("long int long : %d\n", sizeof(long int long));
    printf("long long int : %d\n", sizeof(long long int));

    printf("\n");

    printf("int long long signed : %d\n", sizeof(int long long signed));
    printf("int long signed long : %d\n", sizeof(int long signed long));
    printf("int signed long long : %d\n", sizeof(int signed long long));
    printf("signed long long int : %d\n", sizeof(signed long long int));
    printf("signed long int long : %d\n", sizeof(signed long int long));
    printf("signed int long long : %d\n", sizeof(signed int long long));

    printf("\n");

    printf("float : %d\n", sizeof(float));

    printf("\n");
    
    printf("double : %d\n", sizeof(double));

    printf("\n");

    printf("double long : %d\n", sizeof(double long));
    printf("long double : %d\n", sizeof(long double));

    return 0;
}