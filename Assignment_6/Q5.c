#include <stdio.h>
#include "head.h"


int main()
{
    char str[1000];
    printf("Enter a String for atoi() ");
    scanf("%[^\n]", str);
    
    int res = ATOI(str);

    printf("ATOI()  %d\n", res);
    
    return 0;
}
