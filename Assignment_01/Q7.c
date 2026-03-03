#include<stdio.h>

int main()
{
          int num,rev;
          int num1,num2,num3,num4;
          printf("ENTER THE 4 DIGIT NUMBER\n");
          scanf("%d",&num);
          num1=num/1000;
          num2=(num/100)%10;
          num3=(num/10)%10;
          num4=(num%10);
          printf("FACE VALUE OF %d\n   %d  %d  %d  %d\n",num,num1,num2,num3,num4);           
          printf("PLACE VALUE OF %d\n  %d  +  %d +  %d +  %d\n",num,num1*1000,num2*100,num3*10,num4*1);
          rev =num4*1000+num3*100+num2*10+num1*1;
          printf("REVERSE VALUE OF %d\n  %d\n",num,rev);
  return 0;
}
