#include<stdio.h>

//WITHOUT USING LOGICAL OPERATOR
/*
int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
                printf("Leap Year - 366 days");
            else
                printf("Not a Leap Year - 365 days");
        }
        else
            printf("Leap Year :366 days");
    }
    else
        printf("Not a Leap Year: 365 days");

    return 0;
}

*/
//USING LOGICAL OPERATOR

/*
int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Leap Year:366 days");
    else
        printf("Not a Leap Year :365 days");

    return 0;
}
*/
//using conditional operator
#include<stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )?
    printf("Leap Year:366 days") :
    printf("Not a Leap Year:365 days");

    return 0;
}
