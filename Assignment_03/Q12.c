#include <stdio.h>

int main()
{
    int base, index;
    int  result = 1;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter index: ");
    scanf("%d", &index);

  
    for(int i = 1; i <= index; i++) 
    {
        result *= base;
    }

    printf("%d^%d = %d\n", base, index, result);

    return 0;
}
