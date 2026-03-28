#include <stdio.h>
int main() {
    int num;

    printf("Enter  number : ");
    scanf("%d", &num);

    printf("Unique pairs:\n");
    for(int i = 1; i <= num / 2; i++)
    { 
        if(num % i == 0) 
        {         
            printf("%d * %d = %d\n", i, num / i, num);
        }
    }

    return 0;
}
