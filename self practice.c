#include<stdio.h>
int main(void)
{
float A,B;

printf("Enter the first number");
scanf("%f",&A);

printf("Enter the second number:");
scanf("%f",&B);

if(B==0)printf("Cannot divided by zero.");
else printf("Answer is : %f",A/B);

return 0;
}
