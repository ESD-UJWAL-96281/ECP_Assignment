#include<stdio.h>

int main()
{
         int a,b,c;
         float avg;
         printf("ENTER THE NUMBERS");
         scanf("%d %d %d",&a,&b,&c);
         avg = (a+b+c)/3;
         printf("AVERAGE : %.2f\n",avg);
         return 0;
}
