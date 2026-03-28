#include <stdio.h>

int main() {
    int a, b, temp, rem;


    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int x = a, y = b; 
    while (b != 0) {
        rem = a % b;
        printf("%d %% %d = %d\n", a, b, rem);
        a = b;
        b = rem;
    }

    printf("GCD of %d and %d is %d\n", x, y, a);

    return 0;
}
