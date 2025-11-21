#include <stdio.h>

enum days { Sunday, sunday = 0, Monday, monday = 1, Tuesday, tuesday = 2, Wednesday, wednesday = 3, Thursday, thursday = 4, Friday, friday = 5, Saturday, saturday = 6 } Day;

int main()
{
//    printf("Size of enum : %d\n", sizeof(enum));    // error: expected primary-expression before 'enum'
                                                        // error: expected ')' before 'enum'
    printf("Size of enum days : %d\n", sizeof(enum days));
    printf("Size of days : %d\n", sizeof(days));
    printf("Size of Days : %d\n", sizeof(Day));

    Day = tuesday;
    printf("%d\n", Day);

//    Thursday = 432; // error: lvalue required as left operand of assignment

/*
    printf("%d\n", days.wednesday); // error: expected primary-expression before '.' token
    printf("%d\n", Day.wednesday);  // error: request for member 'wednesday' in 'Day', which is of non-class type 'days'
*/
    Day = Thursday;
    printf("%d\n", (int) Day);

    typedef enum days daysTypedef;
    daysTypedef DaysTypedef;

    printf("%d\n", DaysTypedef);
    DaysTypedef = Saturday;     printf("%d\n", DaysTypedef);

    return 0;
}