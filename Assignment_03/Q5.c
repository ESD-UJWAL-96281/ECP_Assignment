#include <stdio.h>

int main() {
    int num;
    int fact= 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = num; i >= 1; i--) {
        fact*= i;
        printf("%d", i);
        if(i > 1) {
            printf(" * ");
        }
    }

    printf(" = %d\n", fact);
    return 0;
}
