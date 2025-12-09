#include <stdio.h>

int evenOdd_ifElse(int);
int evenOdd_switchCase(int);

int main()
{
    int evenOddVar;
    int checkEvenOdd;
    int res;

    printf("Enter a Number to check if it is Even or Odd : ");
    scanf("%d", &evenOddVar);
//    printf("checking the %d value for Even or Odd\n", evenOddVar);

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

    checkEvenOdd = evenOddVar;
    checkEvenOdd >>= 1;
    checkEvenOdd <<= 1;

    (evenOddVar == checkEvenOdd)? printf("Number is Even\n") : printf("Number is Odd\n");

    return 0;
}

int evenOdd_ifElse(int num)
{
    int checkEvenOdd = num;
    checkEvenOdd >>= 1;
    checkEvenOdd <<= 1;

    if(num != checkEvenOdd)
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
    int checkEvenOdd = Num;
    checkEvenOdd >>= 1;
    checkEvenOdd <<= 1;

    switch(Num != checkEvenOdd)
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