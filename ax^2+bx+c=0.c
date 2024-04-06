#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;

    printf("Enter coefficient a,b,c: ");
    scanf("%f%f%f", &a,&b,&c);

    float D = b * b - 4 * a * c;

    if (D > 0) {
        float root1 = (-b + sqrt(D)) / (2 * a);
        float root2 = (-b - sqrt(D)) / (2 * a);
        printf("Root 1 = %.2f and Root 2 = %.2f\n", root1, root2);
    } else if (D == 0) {
        float root = -b / (2 * a);
        printf("Roots are real and equal. Root = %.2f\n", root);
    } else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-D) / (2 * a);
        printf("Roots are complex. Root 1 = %.2f + %.2fi and Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
