#include <stdio.h>
#include "head.h"


int main()
{
   char str[1000], sub[1000];
   printf("Enter a String --> \n");
   scanf("%[^\n]", str);
   printf("Enter a Sub String --> ");
   scanf(" %[^\n]", sub);

   rm_sub(str, sub);
   
   printf("After Removing Sub String --> \n%s\n", str);
    
    return 0;
}
