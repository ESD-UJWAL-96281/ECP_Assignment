#include <stdio.h>

int main() 
{
    int month,year;

    printf("Enter monith");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if(month == 1)
    printf("31 days");
    else if(month == 2)
    {
        if((year % 400 == 0)||(year % 4 == 0 && year % 100 != 0))

            printf("29 days");
        else
            printf("28 days");
    }
    else if(month == 3)
        printf("31 days");
    else if(month == 4)
        printf("30 days");
    else if(month == 5)
        printf("31 days");
    else if(month == 6)
        printf("30 days");
    else if(month == 7)
        printf("31 days");
    else if(month == 8)
        printf("31 days");
    else if(month == 9)
        printf("30 days");
    else if(month == 10)
        printf("31 days");
    else if(month == 11)
        printf("30 days");
    else if(month == 12)
        printf("31 days");
    else
        printf("Invalid month");

    return 0;
}
