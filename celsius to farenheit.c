#include<stdio.h>

int main(){
float n;
printf("Enter the temperature in celsius: ");
scanf("%f",&n);

float farenheit=(n*9/5)+32;

printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", n, farenheit);

return 0;
}
