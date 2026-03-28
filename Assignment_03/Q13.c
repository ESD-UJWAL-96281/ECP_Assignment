#include<stdio.h>

int main()
{
    int n;
    int a = 1, b = 1, next;

 
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for(int i = 1; i <= n; i++)
    {
        if(i == 1) {
            printf("%d", a);
        } else if(i == 2)
        {
            printf(", %d",b);
        } else {
            next = a + b;
            printf(", %d", next);
            a = b;
            b = next;
        }
    }

    printf("\n");
    return 0;
}
