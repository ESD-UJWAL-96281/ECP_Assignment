#include <stdio.h>
#include <math.h>

int main()
 {
    float a, b, c;
    float perimeter, s, area;
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    perimeter = a + b + c;
    s = perimeter / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Perimeter = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);
    return 0;
}
