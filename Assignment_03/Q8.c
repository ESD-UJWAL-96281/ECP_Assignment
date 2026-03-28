#include <stdio.h>

int main() {
    int num, a;

    printf("Enter a number: ");
    scanf("%d", &num);

    a = num; 

    printf("%d = ", num);
    for(int i = 2; i <= a; i++)
    {
        while(num % i == 0) 
        {  
            printf("%d", i);
            num /= i;       
            if(num != 1)
            {     
                printf(" * ");
            }
        }
    }

    printf("\n");
    return 0;
}
