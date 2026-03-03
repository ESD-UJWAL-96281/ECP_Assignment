#include<stdio.h>

int main()
{
    int a,b;
    printf("ENTER FIRST NUMBERS\n");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBERS\n");
    scanf("%d",&b);
    printf("SUM OF %d & %d : %d\n",a,b,a+b);
    printf("DIFFERENCE OF %d & %d : %d\n",a,b,a-b);
    printf("PRODUCT OF %d & %d : %d\n",a,b,a*b); 

    signed char p,q;  
    printf("ENTER FIRST NUMBERS\n");
    scanf("%hhd",&p);
    printf("ENTER SECOND NUMBERS\n");
    scanf("%hhd",&q);
    printf("SUM OF %d & %d : %d\n",p,q,p+q);
    printf("DIFFERENCE OF %d & %d : %d\n",p,q,p-q);
    printf("PRODUCT OF %d & %d : %d\n",p,q,p*q); 
   
    unsigned char e,f;     
    printf("ENTER FIRST NUMBERS\n");
    scanf("%hhu",&e);
    printf("ENTER SECOND NUMBERS\n");
    scanf("%hhu",&f);
    printf("SUM OF %u & %u : %u\n",e,f,e+f);
    printf("DIFFERENCE OF %u & %u : %u\n",e,f,e-f);
    printf("PRODUCT OF %u & %u : %u\n",e,f,e*f); 
     
    long x,y;  
    printf("ENTER FIRST NUMBERS\n");
    scanf("%ld",&x);
    printf("ENTER SECOND NUMBERS\n");
    scanf("%ld",&y);
    printf("SUM OF %ld & %ld : %ld\n",x,y,x+y);
    printf("DIFFERENCE OF %ld & %ld : %ld\n",x,y,x-y);
    printf("PRODUCT OF %ld & %ld : %ld\n",x,y,x*y); 
 return 0;
}
