#include<stdio.h>

int main()
{
    int num, temp, rem, rev = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    if(num < 10000 || num > 99999)
    {
        printf("Please enter a valid 5-digit number");
        return 0;
    }

    temp = num;

    while(num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if(temp == rev)
        printf("%d is a Palindrome number", temp);
    else
        printf("%d is not a Palindrome number", temp);

    return 0;
}
