#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("All factors: ");
    for(int i = 1; i < num; i++)
    { 
        if(num % i == 0) {
            printf("%d", i);
            if(i != num / 2 && i != 1) { 
                printf(", ");
            } else if(i == 1 && num != 1) {
                printf(", ");
            }
        }
    }
    printf("\n");

    return 0;
}
