#include<stdio.h>
int main()
{ 
      float n1,n2,res;
      printf("Enter First Number\n");
      scanf("%f",&n1);
      printf("Enter Second Number\n");
      scanf("%f",&n2);
      if (n1==0)
      {
	      printf("Invalid Input");
      }
      else
      {
	      res = n1/n2;
	     printf("DIVISION of %f & %f: %.2f\n",n1,n2,res); 
      }
      return 0;
}	
