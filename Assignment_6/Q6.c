
#include <stdio.h>
#include "head.h"


int main()
{
    int n; 
    char str[1000];
    printf("Enter a number ");
    
    scanf("%d", &n);

    char *ptr = ITOA(n, str, 10);

    printf("ITOA - %s\n", str);
    
    return 0;
}

