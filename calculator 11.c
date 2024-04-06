#include <stdio.h>

int main() {
    char operator;
    float a, b, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (operator == '+') {
        result = a + b;
        printf("Result: %.3f + %.3f = %.3f\n", a, b, result);
    } else if (operator == '-') {
        result = a - b;
        printf("Result: %.3f - %.3f = %.3f\n", a, b, result);
    } else if (operator == '*') {
        result = a * b;
        printf("Result: %.3f * %.3f = %.3f\n", a, b, result);
    } else if (operator == '/') {

            printf("Result: %.3f / %.3f = %.3f\n", a, b, result);
            } else {
        printf("Error! Invalid operator.\n");
    }

    return 0;
}
