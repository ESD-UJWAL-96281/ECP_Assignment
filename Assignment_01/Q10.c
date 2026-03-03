#include <stdio.h>

int main() {
   int cel;
    
    printf("Enter Celsius\n");
    scanf("%d",&cel);
    printf("Celsius to Fahrenheit\n");
    printf(" Celsius = %.2f Fahrenheit\n", (cel * 9.0/5) + 32);

    printf("\nFahrenheit to Celsius:\n");
    printf(" Fahrenheit = %.2f Celsius\n", (cel/9) * (cel - 32));

    return 0;
}
