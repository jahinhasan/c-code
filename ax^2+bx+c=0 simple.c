#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;

    printf("Enter coefficient a,b,c: ");
    scanf("%f%f%f", &a,&b,&c);

    float D = b * b - 4 * a * c;


        float root1 = (-b + sqrt(D)) / (2 * a);
        float root2 = (-b - sqrt(D)) / (2 * a);
        printf("Root 1 = %.2f and Root 2 = %.2f\n", root1, root2);

    return 0;
}
