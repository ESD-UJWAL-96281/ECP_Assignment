
#include <stdio.h>
#include "head.h"

/*
   
*/

int main()
{
    char str[1000];
   /*
   printf("Enter a String --> \n");
   scanf("%[^\n]", str);
    
   //Length of String
    int len = STRLEN(str);
    printf("Length of string is - %d\n", len);

    //String copy
    char buff[1000];
    STRCPY(buff, str);
    printf("Sting copy - %s\n", buff);

    //String concat
    printf("ENter 2nd Sting to Concat - ");
    scanf(" %[^\n]", buff);
    STRCAT(str, buff);
    printf("After Concat - %s\n", str);
    
    //String Compare
    printf("ENter 2nd Sting to Compare - ");
    scanf(" %[^\n]", buff);

    int res;
    if(res = STRCMP(str, buff))
    {
        printf("%s - %s = %d\n", str, buff, res);
    }
    else
        printf("Strings are Equal\n");

    //String Compare Without case sensitive
    printf("ENter 2nd Sting to Compare - ");
    scanf(" %[^\n]", buff);

    if(res = STRICMP(str, buff))
    {
        printf("%s - %s = %d\n", str, buff, res);
    }
    else
        printf("Strings are Equal\n");
    
    printf("Enter a String to Reverse --> ");
    scanf(" %[^\n]", str);
    STRREV(str);
    printf("After reversing String -->\n%s\n", str);
*/    
    char ch;
    char *ptr;
    printf("Enter a String -->\n");
    scanf(" %[^\n]", str);
/*    
    printf("Enter a Charecter to Find --> ");
    scanf(" %c", &ch);

    if((ptr = STRCHR(str, ch)) != NULL)
        printf("Enter Charecter Present in String --> %s\n", ptr);
    else
        printf("Entered charecter is Not Present!!???\n");
*/
    char sub[1000];
    printf("Enter substring to Find --> \n");
    scanf(" %[^\n]", sub);

    ptr = STRSTR(str, sub);

    if(!ptr)
        printf("%s is Not Present!!??\n", sub);
    else
        printf("%s Is Present.. \n", ptr);

    return 0;
}

