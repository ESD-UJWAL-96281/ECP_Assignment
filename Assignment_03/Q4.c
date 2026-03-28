#include<stdio.h>
int main()
{
int num;
long long fact=1;
printf("Enter the number\n");
scanf("%d",&num);
printf("%d!=",num);
for(int i=1;i<=num;i++)
{
fact*=i;
printf("%d",i);
if (i<num)
{
printf("*");

    }

    }
    printf("= %lld",fact);

    }


   
