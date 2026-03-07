#include<stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter First Number\n");
    scanf("%d", &num1);

    printf("Enter Second Number\n");
    scanf("%d", &num2);

    printf("Enter Third Number\n");
    scanf("%d", &num3);

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("%d is the Maximum Number", num1);
        }
        else
        {
            printf("%d is the Maximum Number", num3);
        }
    }
    else
    {
        if(num2 > num3)
        {
            printf("%d is the Maximum Number", num2);
        }
        else
        {
            printf("%d is the Maximum Number", num3);
        }
    }

    return 0;
}
