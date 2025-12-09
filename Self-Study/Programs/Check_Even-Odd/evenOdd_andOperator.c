#include <stdio.h>

int bitwise(int);
int evenOdd_switchCase(int);

int main()
{
    int evenOddVar;
    int res;

    printf("Enter a Number to check if it is Even or Odd : ");
    scanf("%d", &evenOddVar);
//    printf("checking the %d value for Even or Odd\n", evenOddVar);

    (evenOddVar & 1)? printf("Number is Odd\n") : printf("Number is Even\n");

//    res = evenOdd_ifElse(evenOddVar);
    res = evenOdd_switchCase(evenOddVar);
    if(res == 1)
    {
        printf("Result for Even-Odd : Odd");
    }
    else
    {
        printf("Result of Even-Odd : Even");
    }
    
    printf("\n");

    return 0;
}

int evenOdd_ifElse(int num)
{
    if(num & 1 == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

    return -1;
}

int evenOdd_switchCase(int Num)
{
    switch(Num & 1)
    {
        case 1:
        {
            return 1;
//            break;
        }
        case 0:
        {
            return 0;
//            break;
        }
        default :
        {
            return -1;
            break;
        }
    }
    return -1;
}