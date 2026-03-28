
#include <stdio.h>
#include "head.h"


int main()
{
   char str[1000]; 
   char ch;
   printf("Enter a String --> \n");
   scanf("%[^\n]", str);
   printf("Enter a Letter to Remove --> ");
   scanf(" %c", &ch);

   rm_char(str, ch);
   printf("After removing letter %c --> \n%s\n", ch, str);
    
    return 0;
}

