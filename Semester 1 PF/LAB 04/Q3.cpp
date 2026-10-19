#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, result1, result2;
    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    result1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    result2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    printf("Result 1 = %.2f\nResult 2 = %.2f", result1, result2);
    return 0;
}			
