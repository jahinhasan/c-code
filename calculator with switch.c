#include <stdio.h>

int main() {
    char operator;
    float a, b, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (operator) {
        case '+':
        result = a + b;
        printf("Result: %.3f + %.3f = %.3f\n", a, b, result);
    break;
    case '-' :
        result = a - b;
        printf("Result: %.3f - %.3f = %.3f\n", a, b, result);
     break ;
     case  '*':
        result = a * b;
        printf("Result: %.3f * %.3f = %.3f\n", a, b, result);
    break ;
    case '/' :

            printf("Result: %.3f / %.3f = %.3f\n", a, b, result);
    break ;
    default:
        printf("Error! Invalid operator.\n");
    }

    return 0;
}
